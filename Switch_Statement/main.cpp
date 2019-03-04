#include <iostream>
using namespace std;
int main()
{
    char letter_grade{};
    cout<<"PLEASE ENTER YOUR GRADE : ";
    cin>> letter_grade;
    switch(letter_grade){
        case  'a':
        case  'A':
        cout<< "You need a 90 or above, study hard!"<<endl;
        break;
        
        case  'b':
        case  'B':
        cout<< "You need a 80- 89 or , go study hard!"<<endl;
        break;
        
        case  'c':
        case 'C':
        cout<< "You need a 70-79 or above, average guy"<<endl;
        break;
        
        case  'd':
        case  'D':
        cout<< "Dont take life for granted work hard"<<endl;
        break;
        
        case  'f':
        case  'F':
        {
        char confirm{};
        cout << "Are you Sure (Y/N)?";
        cin >> confirm;
        if (confirm =='y' || confirm =='Y')
            cout <<"OK I guess you dont like to study...: "<< endl;
           
            else  if  (confirm =='N' || confirm =='n')
                 cout << "GOOD NOW GO STUDY";
             else   
            cout << "Illegal letter";
         break;
    }
        default:
        cout<< "Sorry Wrong Grade";
        break;
    }
    return 0;
}