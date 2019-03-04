#include <iostream>

using namespace std;

void number(int num);

void number(int num){
    num = 3000;
    cout << "The number value inside funtion is: "<< num << endl;
    
}

int main()
{
    int num{50};
    cout << "The number value inside MAIN funtion is: "<< num << endl;
    number(num);
    cout << "The number value after executing number funtion in manin function is: "<< num << endl;
    return 0;
}
