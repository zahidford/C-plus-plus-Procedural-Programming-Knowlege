#include <iostream>
using namespace std;
inline unsigned long long fibonacci (unsigned long long n);
int main()
{
    int n {0};
    cout << " Hello enter the nth number of the fibonachhi series" << endl;
    cin >> n;
    cout << " The " << n <<"th number in fibonachi serices is " << fibonacci(n) <<endl;
    
    return 0;
}

inline unsigned long long fibonacci (unsigned long long n)
{
    if (n <= 1)
        return n;
    return fibonacci (n - 1) + fibonacci (n - 2);
}