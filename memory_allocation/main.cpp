#include <iostream>
using namespace std;

int main()
{
    int *int_ptr {nullptr};
    int_ptr = new int;
    cout << int_ptr << endl;
    cout << *int_ptr << endl;
    *int_ptr = 100;
    cout << *int_ptr << endl;
    delete int_ptr;
    int *array_ptr {nullptr};
    size_t size {0};
    cout << "How big do you want the array?"<< endl;
    cin >> size;
    array_ptr = new int[size];
    delete [] array_ptr;
    
    double *temp_ptr {nullptr};
    
    cout << "How many temps?";
    cin >> size;
    temp_ptr = new double[size];
    cout << temp_ptr << endl;
    delete [] temp_ptr;
    
    
    return 0;
}
