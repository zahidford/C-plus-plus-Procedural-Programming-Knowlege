#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num {100};
    int num2 {200};
    int *num_pointer {nullptr};
    cout << "Num pointer is: " << num_pointer << endl;
    num_pointer = &num;
    cout << "Num pointer is: " << num_pointer << endl;
    cout << "Num pointer value pointed is: " << *num_pointer << endl;
    cout << "Num  is: " << num << endl;
    num_pointer = &num2;
    cout << "Num pointer is: " << num_pointer << endl;
    cout << "Num pointer value pointed is: " << *num_pointer << endl;
    cout << "Num  is: " << num2 << endl;
    
    string name {"Zahidul"};
    string *name_pointer {&name};
    cout << "The pointer string value is " << *name_pointer <<endl;
    name ="Amin";
    cout << "The pointer is string is " << *name_pointer <<endl;
    vector <string> list {"dark","silence","chatexplore"};
    vector <string> *list_pointer {&list};
    cout << (*list_pointer).at(0) << endl;
    cout << (*list_pointer).at(1) << endl;
    cout << (*list_pointer).at(2) << endl;
    
    return 0;
}
