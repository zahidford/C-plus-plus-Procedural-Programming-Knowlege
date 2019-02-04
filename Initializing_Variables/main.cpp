#include <iostream>
using namespace std;
int main()
{
    int area {0};
    double length {0.00};
    float width {50};
    
    
    cout <<"Enter the length of the Room\n";
    cin >>length; 
    cout <<"Enter the width of the Room\n";
    cin >>width; 
    area = length*width;
    cout <<"The name area is " << area <<" Square feet"<<endl;
    return 0;
}