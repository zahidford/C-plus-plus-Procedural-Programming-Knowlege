#include <iostream>
using namespace std;
int main()
{
    int a {4};
    int b {5};
    a +=1;
    cout <<"a+=1 = "<<a<<endl;
    b /=5;
     cout <<"b/=5 = "<<b<<endl;
    a *= (a+b);
   cout <<"a*=(a+b) = "<<a<<endl;
    return 0;
}