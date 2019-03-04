#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main()
{
    int scores[]{10,20,30};
    for (auto score: scores)
        cout << score <<endl;
        
    vector <double> temperatures {56.3,45.34,80.0,72.5};
    double average_temp{};
    double total {};
for (auto temo:temperatures)
    total +=temo;
    
    if (temperatures.size() !=0)
    average_temp = total/temperatures.size();
    cout << fixed << setprecision(1);
    cout <<"Average temperatures"<< average_temp <<endl;
    for (auto c: "This is a test")
        if (c!=' ')
            cout << c;
            
        cout << endl;
    
    return 0;
}