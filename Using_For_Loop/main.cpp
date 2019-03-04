#include <iostream>
#include <vector>
using namespace std;
int main()
{
      for (int i{1}; i<=10;++i)
        cout << i << endl;
        
    for (int i{1}; i <=10; i+=2)
        cout <<"Blastoff!" << endl;
    for (int i{10}; i<=100;i+=10){
        if (i % 15 == 0)
            cout << 1 << endl;
    }
    int j{};
    for (int i{1}; i<=100; ++i, ++j){
        cout << i<<j;
        if (i % 10 ==0)
            cout << endl;
    }
    
    
 
    
       vector<int> nums { 10,20,30,40,50};
    for (unsigned i{0}; i< nums.size(); ++i)
       cout << nums[i] << endl;
    
    return 0;
}