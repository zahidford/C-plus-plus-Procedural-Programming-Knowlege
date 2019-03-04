#include <iostream>

using namespace std;

int main()
{
    const int *ptr {nullptr}; // makes the valoe constant
     int *const ptr {nullptr}; // makes the address constant
     const int *const {nullptr}; // both address and vlue constant
    cout << "Hello Zahidul Amin" << endl;
    return 0;
}
