#include <iostream>
using namespace std;
int main()
{
    cout <<"hello welcome to Zahid Carpet Cleaning Service\n..."<<endl;
    cout<<"How many small rooms would you like clheand?"<<endl;
    int number_of_small_rooms{0};
     int number_of_large_rooms{0};
    const double price_per_small_room {30};
    const double price_per_large_room {50};
    const double sales_tax{0.06};
    const int estimate_expiry{30};
    cin>> number_of_small_rooms;
    cout<<"How many large rooms would you like clheand?"<<endl;
     cin>> number_of_large_rooms;
    cout <<"\n Estimate for Carpet Cleaning Service"<<endl;
    cout <<"Number of small rooms" << number_of_small_rooms<<endl;
    cout <<"Number of large rooms" << number_of_large_rooms<<endl;
    cout << "Price per small room S"<<price_per_small_room<<endl;
     cout << "Price per large room S"<<price_per_large_room<<endl;
    cout <<"Cost:$"<< (price_per_small_room* number_of_small_rooms)+( price_per_large_room*number_of_large_rooms) << endl;
    cout <<"Tax S" <<((price_per_small_room* number_of_small_rooms)+( price_per_large_room*number_of_large_rooms))*sales_tax <<endl;
    cout <<"==================="<<endl;
    cout <<"Total Estimate $"<<((price_per_small_room* number_of_small_rooms)+( price_per_large_room*number_of_large_rooms) )+(((price_per_small_room* number_of_small_rooms)+( price_per_large_room*number_of_large_rooms))*sales_tax )<<endl;
    cout <<"This estimate is valid for"<<30 <<"days" <<endl;
    cout<<endl;
    return 0;
}