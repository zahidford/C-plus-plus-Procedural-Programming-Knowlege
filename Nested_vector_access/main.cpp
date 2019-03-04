#include <iostream>
#include <vector>
using namespace std;
int main()
{ 
    vector <vector <int>> vector_2d
    {
        {1, 2, 3},
        {10, 20, 30, 40},
        {100, 200, 300, 400, 500},
    };
    for (auto vec: vector_2d) {
        for (auto val: vec) {
            cout << val << " ";
        };
        cout << endl;
    };
    return 0;
}