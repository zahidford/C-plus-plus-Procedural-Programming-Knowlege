#include <iostream>
using namespace std;
int main()
{
    int cents_entered{0};
    cout <<"Enter number of cents you have : ";
    cin >> cents_entered;
    int dollar{100},quarters{25}, dime{10},nickel{5},penny{1};
    bool if_true{0};
    int divide{0};
    
    //finding dollars
if_true=(cents_entered >=100);
divide=  if_true*(cents_entered/dollar);
cents_entered -=( if_true* (divide*dollar));
cout <<"Dollars = "<<divide <<endl;
// finding quarters
if_true=(cents_entered >=25);
divide=  if_true*(cents_entered/quarters);
cents_entered -=  ( if_true* (divide*quarters));
cout <<"Quarters = "<<divide<<endl;
// finding dime

if_true=cents_entered >=10;
divide= if_true*(cents_entered/dime);
cents_entered -= if_true* (divide*dime);
cout <<"Dime = "<<divide <<endl;

//finding nickel

if_true=cents_entered >=5;
divide= if_true*(cents_entered/nickel);
cents_entered -= if_true* (divide*nickel);
cout <<"Nickel = "<<divide <<endl;

if_true=cents_entered >=1;
divide= if_true*(cents_entered/penny);
cents_entered -= if_true* (divide*penny);
cout <<"Penny= "<<divide <<endl;

    
    return 0;
}




  