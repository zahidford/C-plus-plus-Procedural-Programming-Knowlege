#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num_items{};
    cout << "How many data itmens do you have?";
    cin >> num_items;
    vector <int>data{};
    int data_item{};
    for(int i{1}; i<=num_items;++i){
        
        cout <<"Enter data item" << i << ":";
        cin >> data_item;
        data.push_back(data_item);
        
    }
    cout <<"\n Display Histogram";
    for (auto val:data){
        for (int i{1}; i<=val;++i)
            cout <<'*';
            cout<<endl;
        }
      
    return 0;
}