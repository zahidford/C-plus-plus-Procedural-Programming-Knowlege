#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"kiwi"};
    string s4 {"apple"};
    string s5 {"s1"};
    string s6 {s1,0,3};
    string s7 {10,'X'};
    
    cout << s0 <<endl;
    cout << s0.length() << endl;
    
    // initialization
    cout << "\n Initialization" << "\n------------"<<endl;
    cout << " S1 is initialized to " << s1 << endl;
    cout << " S2 is initialized to " << s2 << endl;
    cout << " S3 is initialized to " << s3 << endl;
    cout << " S4 is initialized to " << s4<< endl;
    cout << " S5 is initialized to " << s5 << endl;
    cout << " S6 is initialized to " << s6 << endl;
    cout << " S7 is initialized to " << s7 << endl;
    
    // comparision
    
    cout << "\n Comparision" << "\n.............." <<endl;
    cout << boolalpha; //Shows true and false
    cout << s1 << "==" <<s5 << ": " << (s1 == s5) << endl;
    cout << s1 << "==" <<s2 << ": " << (s1 == s2) << endl;
    cout << s1 << "!=" <<s2 << ": " << (s1 != s2) << endl;
    cout << s1 << "<" <<s2 << ": " << (s1 < s2) << endl;
    cout << s2 << ">" <<s1 << ": " << (s2 > s1) << endl;
    cout << s4 << "< " <<s5 << ": " << (s2 <  s5) << endl;
    cout << s1 << "==" << "Apple" << ": " << (s1 == "Apple") << endl;
    
    // Assignment
    cout << "\n Assignment" << "\n --------------------------------------" << endl;
    s1 = "Watermelon";
    cout << "S1 is now:" << s2 << endl;
    s3 = "Frank";
    cout << " S3 is now:" << s3 << endl;
    s3[0] = 'C';
    cout << "First letter changed to C" << s3 << endl;
    s3.at(0) = 'P';
    cout << "First letter changed to P" << s3 << endl;
    // Concatnation
    s3 = "yummy juice";
    cout << "\n Cioncatenation" << "\n--------------------" << endl;
    s3 = s5 + "and " +s2 + "juice";
    cout << "S3 is now : " << s3 << endl;

// range base for loop
for (char c:s1)
 cout << c;
 cout << endl;
 
 // substring
 
  cout << "\n Substring" <<endl;
  s1 = "This is a test";
  cout << s1.substr(0,4) << endl;
  cout << s1.substr(5,2) << endl;
  cout << s1.substr(10,4) << endl;
  
  //erase
  cout << " \n Erase"<<endl;
  s1= "LOL Life Truly Sucks";
  s1.erase(0,5);
  cout <<s1 << endl;
  
  //get line
  
  cout << " \n Erase"<<endl;
  cout << " Enter your full name"<<endl;
  string full_name;
  getline(cin,full_name);
  cout << full_name<< endl;
  
  // Find
  cout << "\n find" << endl;
  s1 = "The secret word is Boo";
  string word{};
  cout << "Enter the world to find:";
  cin >> word;
  size_t position = s1.find(word);
  if (position != string::npos)
      cout << "Found" << word << "at position: " << position << endl;
      else 
          cout << "Sorry, " << word << " not found" << endl;
          cout << endl;
          
    return 0;
}