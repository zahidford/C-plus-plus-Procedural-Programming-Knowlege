#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input_string{};
    string pyramid_striing{};
    
    cout << "Please Enter a String of character or whatever!: "; 
    getline(cin,input_string);
    
    cout << " Here comes your Pyramid "<<endl;
    size_t string_length;
    
    string_length = input_string.length();
    for (int i{0}, count{0}; i < string_length; ++i){
        for( int space{0} ; space <(string_length-(i)) ; ++space)
        {
            cout <<" ";
        }
    for(int j{0} ; j<((2*(i+1))-1);++j){
             
        if (j<string_length)
        pyramid_striing = input_string.substr(j, 1);
        
        else 
        pyramid_striing = input_string.substr(j-string_length, 1);
        
        cout << pyramid_striing ;
    }
    
     cout <<endl;   
    }
    
    return 0;
}