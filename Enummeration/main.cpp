#include <iostream>
using namespace std;
int main()
{
    enum direction {
    left,right,up,down};
    
    direction heading {left};
    switch(heading){
        case left:
        cout <<"Going left";
        break;
        case right:
        cout << "Going left" << endl;
        break;
        
    }
    cout << endl;
    return 0;
}