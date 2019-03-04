#include <iostream>

using namespace std;

void swapping(int *a, int *b)
{
    int temp {};
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x {100};
    cout <<"X is: " << x << endl;
    int y {200};
    cout <<"Y is:" << y << endl;
    swapping (&x, &y);
    cout <<"X is: " << x << endl;
    cout <<"Y is: " << y << endl;
    
    return 0;
}
