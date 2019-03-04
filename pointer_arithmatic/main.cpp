#include <iostream>

using namespace std;

int main()
{
    cout << boolalpha;
    int scores[]{100,95,89,68,68,-1};
    int *score_ptr {scores};
    
    while(*score_ptr !=-1)
    {
        cout <<*score_ptr <<endl;
        score_ptr++;
    }
    
    cout << "\n .........................." << endl;
score_ptr = scores;
while (*score_ptr != -1)
    cout << *score_ptr++ << endl; // no bracets so same output as previous.
    
string s1 {"Zahidul"};
string s2 {"Zahidul"};
string s3 {"James"};

string *p1 {&s1};
string *p2 {&s2};
string *p3 {&s3};

cout << p1 << "==" << p2 << " " << (p1 == p2) << endl;
cout << p1 << "==" << p3 << " " << (p1 == p3) << endl;


cout << *p1 << "==" << *p2 << " " << (*p1 == *p2) << endl;
cout << *p1 << "==" << *p3 << " " << (*p1 == *p2) << endl;

p3 = &s3;

cout << *p1 << "==" << *p3 << ":" << (*p1 == *p3) << endl;

cout << "\n ......................" << endl;

char name[] {"frank"};

char *char_ptr1{nullptr};
char *char_ptr2{nullptr};

char_ptr1 = &name[0];
char_ptr2 = &name[3];

cout << "In the string " << name <<",  " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " Characters away from " << *char_ptr1 << endl; 
    
    return 0;
}


