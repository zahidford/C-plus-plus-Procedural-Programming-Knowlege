#include <iostream>
using namespace std;
int main()
{
    // == != operators
    bool equal_result {false};
    bool not_equal_result {false};
    int num1{},num2{};
    cout<<boolalpha; //get true false instead of 0 1
    cout<<"Enter two Integer Seperated by Space "<<endl;
    
    cin>>num1>>num2;
    equal_result = (num1==num2);
    
    not_equal_result= (num1 !=num2);
    cout << "Comparision resuls whether equal "<<equal_result<<endl;
    cout <<"Compatision result (not equl): " <<not_equal_result<<endl;
    
    char char1{},char2{};
    cout<<"Enter two character Seperated by Space "<<endl;
    
    cin>>char1>>char2;
    equal_result = (char1==char2);
    
    not_equal_result= (char1 !=char2);
    cout << "Comparision resuls whether equal "<<equal_result<<endl;
    cout <<"Compatision result (not equl): " <<not_equal_result<<endl;
    
      double double1{},double2{};
    cout<<"Enter two Integer Seperated by Space "<<endl;
    
    cin>>double1>>double2;
    equal_result = (double1==double2);
    
    not_equal_result= (double1 !=double2);
    cout << "Comparision resuls whether equal "<<equal_result<<endl;
    cout <<"Compatision result (not equl): " <<not_equal_result<<endl;
 
    return 0;
}