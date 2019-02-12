#include <iostream>
using namespace std;
int main()
{
    int total_amount {100};
    int total_number {8};
    double average {0.0};
    average = total_amount/total_number;
    cout <<average<<endl;
    
    average = static_cast<double>(total_amount)/total_number;
    cout << average <<endl;
    
    // ask the use to use  3 integers
    int total {};
    int num1 {},num2{},num3{};
    const int count {3};
    cout <<"Enter 3 integers seperated by space ";
    cin >>num1>>num2>>num3;
total=num1+num2+num3;
     total=num1+num2+num3;
    average = static_cast<double> (total) / count;
    cout <<" The three numbers were: " <<num1<<","<<num2<<";"<<num3<<endl;
    cout<<"The sum of numbers were"<<total<<endl;
    cout<<"The average is "<<average<<endl;

    
    
    return 0;
}