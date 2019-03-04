#include <iostream>
using namespace std;
int main()
{
    int  length{}, width{}, height{};
     double base_cost{2.50};
    const int tier1_threshold{100};
    const int tier2_threshold{500};
    int max_dimension_length {10};
    double tier1_surcharge{0.10};
    double tier2_surcharge{0.25};
    
    int package_volume{};
    
    cout <<"Welcome to the package cost calculator"<<endl;
    cout <<"Enter length, width and height of the package seperated by spaces : "<<endl;
    cin >> length >> width >> height;
    
    if(length> max_dimension_length || width> max_dimension_length || height > max_dimension_length)
        cout << "Sorry, package rejected - dimention exceedded" << endl;
        else {
            double package_cost {};
            
            package_volume = length * width * height;
            package_cost = base_cost;
            
        if (package_volume>tier2_threshold){
            package_cost  += package_cost*tier2_surcharge;
            cout<< "adding tier 2 surcharge" <<endl;
        } else if (package_volume>tier1_threshold){
            package_cost +=package_cost * tier1_surcharge;
            cout << "adding tier 1 surcharge" << endl;
        }
        cout << "The volume of your package is "<< package_volume <<endl;
        cout <<"your package will cost $" << package_cost <<" to ship"<<endl;
        
        cout<<endl;
        
        }
           return 0;
        }
 
