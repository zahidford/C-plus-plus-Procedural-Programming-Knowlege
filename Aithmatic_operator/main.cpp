#include <iostream>
using namespace std;
int main()
{
    int num1 {100};
    int num2 {200};
    int result {0};
    result = num1 +num2;
    cout <<num1<<"="<<num2<<"="<<result<<endl;
    result = num1-num2;
    cout <<"Num1 -Num2"<<"="<<result<<endl;
    result = num1*num2;
    cout <<"Num1 *Num2"<<"="<<result<<endl;
    result = num1/num2;
    cout <<"Num1 / Num2"<<"="<<result<<endl;
    
    result = num1%num2;
    cout <<"Num1 % Num2"<<"="<<result<<endl;

    return 0;
}