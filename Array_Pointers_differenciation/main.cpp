#include <iostream>

using namespace std;

int main()
{
    int scores [] {100,95,89};
    cout << "Value of scores: " << scores << endl;
    
    int *score_ptr {scores};
    cout <<" array address "<< score_ptr <<endl;
    cout << "Value of score_ptr: " << score_ptr << endl;
    cout << "Array Notation"<<endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;
    
    cout <<" Pointer notation" << endl;
    
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;
    
    cout << "pointer offset notation"<<endl;
    cout << *(score_ptr) << endl;
    cout << *(score_ptr +1) << endl;
    cout << *(score_ptr +1) << endl;
    
    cout << "Array off set" << endl;
    cout << *(scores) << endl;
    cout << *(scores +1) << endl;
    cout << *(scores +1) << endl;
    
    return 0;
}
