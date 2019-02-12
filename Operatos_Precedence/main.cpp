#include <iostream>
using namespace std;
int main()
{
    int result {0};
    int num1{10},num2{20},num3{30};
    result = num1 + num2 *num3;
    cout <<"num1 + num2 * num3 = "<<result<<endl;
    result = ( num1 + (num2 *num3));
    cout <<" ( num1 + (num2  * num3)) = "<<result<<endl;
    result = num1 + num2 - num3;
    cout <<"num1 +num2 - num3 = "<<result<<endl;
    return 0;
}