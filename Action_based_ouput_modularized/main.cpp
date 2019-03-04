#include <iostream>
#include <vector>
using namespace std;

// Displays Menu
char display_options();

//
void print_numbers(vector <int> numbers);
//
void adding_numbers(vector <int> &numbers);
//
void mean_variable(vector <int> numbers);
//
void small_number(vector <int> numbers);
//
void large_number(vector <int>numbers);

int main()
{
     cout<<"This program is giving you some options, each option allows you to perform actions"<<endl;
    char options{};
    
     vector <int> numbers {1,2,3,4,5,67,7,8,9,10};
       while (options != 'Q' && options != 'q' )
           {
            options = display_options();
            if (options =='P' || options =='p')
            {
               print_numbers(numbers);
            }
            if (options =='A' || options =='a')
            {
              adding_numbers(numbers);  
            }
            if (options =='M' || options =='m')
            {
              mean_variable(numbers);
  
            }
            if (options =='s' || options =='S')
            {
               small_number(numbers); 
            }
            if (options =='l' || options =='L')
            {
                large_number(numbers); 
            }
           }
           cout <<"Program terminated!! Goodbye!!"<<endl;
    return 0;
}
char display_options()
{
        char options{};
        cout << " P - Print numbers "<< endl;
        cout << " A - Add a number "<< endl;
        cout << " M - Display ,eam of the numbers"<< endl;
        cout << " S -  Display the smallest number "<< endl;
        cout << " L -  Display the largest number"<< endl;
        cout << " Q - Quit"<<endl;
        cout << " Enter your choice : " <<endl;
        cin >> options;
        return options;
}
void adding_numbers(vector <int> &numbers)
{
    cout << "===== Enter a number you wish to add =====" << endl; 
              int number_to_add;
              cin >> number_to_add;
              numbers.push_back( number_to_add );
              cout << "The number " << number_to_add << " was added"<<endl;
}
void print_numbers(vector <int> numbers)
{
     cout << "===== List of Numbers =====" << endl; 
            for (auto x : numbers){
               
                cout <<"          "<<x<<endl;
            }
            cout << "===== List of Numbers End =====" << endl;
}
void mean_variable( vector <int> numbers)
{
    cout << "===== The mean value of the list is =====" << endl; 
              int average {numbers.size()};
              int mean {};
              if (average !=0) {
              int result {};
               for (auto x : numbers){
               
               mean += x; }
               result = mean/average;
               cout << "The mean is "<< result <<endl;
              }
}
void small_number(vector <int> numbers)
{
    int small{numbers[0]};
    for (int s{0}; s< numbers.size();++s){
        if (small > numbers[s])
        small= numbers[s];
                 
        }
    cout << "The smallest number on list is" << small << endl;
}

void large_number(vector <int> numbers)
{
    int large{numbers[0]};
             for (int l{0}; l< numbers.size();++l){
                 if (large < numbers[l])
                 large= numbers[l];
             }

}
