#include <iostream>
using namespace std;
int main()
{
    int num{};
    const int lower {10};
    const int upper {20};
    
    cout<<boolalpha;
    
    cout << "Enter an integer - the bouns are "<<lower<<"and"<<upper<<":";
    cin >>num;
    bool outside_bounds {false};
    outside_bounds =(num<lower || num>upper);
    cout <<"The number "<< num <<"ouside bounds " <<upper <<"and "<<lower<< "well it is "<<outside_bounds<<endl;
    bool on_bounds {false};
    on_bounds =(num==lower || num==upper);
    cout <<"The number "<< num <<"on bounds " <<upper <<"and "<<lower<< "well it is "<<on_bounds<<endl;
    return 0;
}