#include <iostream>
using namespace std;
int main()
{
    const double usd_per_eur {1.19};
    cout <<"Welcome to Eur to USD Converter"<<endl;
    cout<<"enter the value in EUR : "<<endl;
    double euros{0.0};
    double dollars {0.0};
    
    cin>> euros;
    dollars =euros*usd_per_eur;
    cout<<"Usd Value is " <<dollars<<endl;
    
    
   
    return 0;
}