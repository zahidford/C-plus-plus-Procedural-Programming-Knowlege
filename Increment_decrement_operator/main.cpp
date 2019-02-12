#include <iostream>
using namespace std;
int main()
{
    int counter {10};
    int result {0};
    
    cout <<"Counter: "<< counter <<endl;
    counter ++;
    cout << "counter:" <<counter <<endl;
    ++counter;
    cout << "counter:" <<counter <<endl;
    
    // post increment
     cout<<"====== Post Increment========"<<endl;

    counter=10;
    result = 0;
    cout<<"counter: "<<counter <<endl;
    result= counter++;
    cout <<"counter : " <<counter <<endl;
    cout <<"Result :"<<result<< endl;
    // Pre Increment
    cout<<"====== Pre Increment========"<<endl;

    counter=10;
    result = 0;
    cout<<"counter: "<<counter <<endl;
    result= ++counter;
    cout <<"counter : " <<counter <<endl;
    cout <<"Result :"<<result<< endl;
    return 0;
}