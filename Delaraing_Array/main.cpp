#include <iostream>
using namespace std;
int main()
{
    char array[5]={'a','e','i','o','u'};
    cout <<"The vowel on first array is "<<array[0]<<endl;
    cout <<"The vowel on last array is "<<array[4]<<endl;
     char letter1=array[0];
     char letter2=array[1];
     cout<<"The array first element in array is "<<letter1<<endl;
     cout<<"The array last  element in array is "<<letter2<<endl;
     
       cout<<"Enter five characters "<<endl;
     cin>>array[0];
     cin>>array[1];
     cin>>array[2];
     cin>>array[3];
     cin>>array[4];
     
     cout<<"The array first element in array is "<<array[0]<<endl;
     cout<<"The second  element in array is "<<array[1]<<endl;
     cout<<"The third  element in array is "<<array[2]<<endl;
     cout<<"The fourth  element in array is "<<array[3]<<endl;
     cout<<"The fifth  element in array is "<<array[4]<<endl;
    return 0;
}