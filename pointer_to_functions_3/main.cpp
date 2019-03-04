#include <iostream>
#include <vector>
#include <string>
using namespace std;

void display(vector<string> *v)
{
    for (auto str: *v)
        cout << str << " "<< endl;
    cout << endl;
}

void display2(int *array , int sentinel)
{
    while (*array != sentinel)
        cout << *array++ << " ";
    cout << endl;
}
int main()
{
    cout << "................" << endl;
    vector <string> stooges {"larry","moe","curly"};
    display(&stooges);
    
    cout << "\n ====================" << endl;
    int scores[] {100,98,97,79,85,-1};
    display2(scores,-1);
    
    
    return 0;
}

