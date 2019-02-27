#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout<<"This program is giving you some options, each option allows you to perform actions"<<endl;
    char options{};
    
     vector <int> numbers {1,2,3,4,5,67,7,8,9,10};
       while (options != 'Q' && options != 'q' ){
        cout << " P - Print numbers "<< endl;
        cout << " A - Add a number "<< endl;
        cout << " M - Display ,eam of the numbers"<< endl;
        cout << " S -  Display the smallest number "<< endl;
        cout << " L -  Display the largest number"<< endl;
        cout << " Q - Quit"<<endl;
        cout << " Enter your choice : " <<endl;
        cin >> options;
        
        // Printing Numbers
        if (options =='P' || options =='p'){
             cout << "===== List of Numbers =====" << endl; 
            for (auto x : numbers){
               
                cout <<"          "<<x<<endl;
            }
            cout << "===== List of Numbers End =====" << endl; 
        }
        
        // Adding a number to list
         if (options =='A' || options =='a'){
              cout << "===== Enter a number you wish to add =====" << endl; 
              int number_to_add;
              cin >> number_to_add;
              numbers.push_back( number_to_add );
              cout << "The number " << number_to_add << " was added"<<endl;
              
         }
        // Calculating Mean of the variable
         if (options =='M' || options =='m'){
              cout << "===== The mean value of the list is =====" << endl; 
              int average {numbers.size()};
              int mean {};
              if (average !=0) {
              int result {};
               for (auto x : numbers){
               
               mean += x; }
               result = mean/average;
               cout << "The mean is "<< result<<endl;
               }
               else {
                   cout << "List is enmpty"<<endl;
               }
         }
         
         // Finding the smallest number in List
         if (options =='s' || options =='S'){
             int small{numbers[0]};
             for (int s{0}; s< numbers.size();++s){
                 if (small > numbers[s])
                 small= numbers[s];
                 
             }
             cout << "The smallest number on list is" << small << endl;
         }
          if (options =='l' || options =='L'){
             int large{numbers[0]};
             for (int l{0}; l< numbers.size();++l){
                 if (large < numbers[l])
                 large= numbers[l];
                 
             }
             cout << "The Largest number on list is " << large << endl;
         }
         
         
        
        
    }
    cout <<"Program terminated!! Goodbye!!"<<endl;
    return 0;
}