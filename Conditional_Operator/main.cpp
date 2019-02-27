#include <iostream>
using namespace std; 
int main()
{
    int num{};
    cout << "Enter Integer"<<endl;
    cin >> num;
    if (num % 2 == 0)
        cout << num << "is even" <<endl;
    else
        cout << num << "is odd" <<endl;
        
        // Testing same logic with conditional statement!
        cout << num << "is " << ((num % 2 ==0) ? "Even" : " Odd")<<endl;

    return 0;
}