#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int>vector1;
    vector<int>vector2;
    vector1.push_back(10);
    vector1.push_back(20);
     cout <<"vector1 has \n..."<<vector1.at(0)<<"size is "<<size(vector1)<<endl;
     cout <<"vector1 has \n..."<<vector1.at(1)<<"size is "<<size(vector1)<<endl;
    
     vector2.push_back(100);
    vector2.push_back(200);
    
     cout <<"vector2 has \n..."<<vector2.at(0)<<"size is "<<size(vector1)<<endl;
     cout <<"vector2 has \n..."<<vector2.at(1)<<"size is "<<size(vector2)<<endl;
//intitializing 2d vector

vector <vector <int>> two_dimen;
two_dimen.push_back(vector1);
two_dimen.push_back(vector2);

cout <<two_dimen.at(0).at(0)<<"  "<<two_dimen.at(0).at(1)<<endl;
cout <<two_dimen.at(1).at(0)<< "  "<<two_dimen.at(0).at(1)<<endl;
     
vector1[0]=1000;

cout <<two_dimen.at(0).at(0)<<"  "<<two_dimen.at(0).at(1)<<endl;
cout <<two_dimen.at(1).at(0)<< "  "<<two_dimen.at(0).at(1)<<endl;
    return 0;
}