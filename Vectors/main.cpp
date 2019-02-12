#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout<<"\n Simple vector outout"<<endl;
    vector <char> vowels {'a','e','i','o','u'};
    cout << vowels[0]<<endl;
    cout << vowels[4]<<endl;
   
//array syntax 
cout<<"\n Simple vector output with Array syntax"<<endl;
    vector <int> test_scores {100,98,80};
    cout<<test_scores[0]<<endl;
    cout<<test_scores[1]<<endl;
    cout<<test_scores[2]<<endl;
// vector syntax
cout<<"\n Simple vector output with vector syntax"<<endl;
    cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;
// reading vector syntax
cout<<"\n Reading vector enter 3 vectors"<<endl;

    cin >>test_scores.at(0);
    cin >>test_scores.at(1);
    cin >>test_scores.at(2);
// updated scores;
cout<<"\n Updated scores"<<endl;
   cout<<test_scores.at(0)<<endl;
    cout<<test_scores.at(1)<<endl;
    cout<<test_scores.at(2)<<endl;

//using pusback
cout<<"\n Enter a number it wil add as an element"<<endl;
int score{0};
cin>>score;
test_scores.push_back(score); 

 cout<<test_scores.at(3)<<endl;
 
 cout<<"\n There are now"<< test_scores.size()<<endl;


// Multi dimentional vector
cout<<"\n Miltidimentional vector"<<endl;
vector <vector<int>>movie_ratings
{
    {1,2,3,4},
    {1,2,3,4},
    {1,2,3,4},
};
cout<<"\n Here are movie ratings for review"<<endl;
cout<<movie_ratings[0][0]<<endl;
cout<<movie_ratings[0][1]<<endl;
cout<<movie_ratings[0][2]<<endl;
    return 0;
}