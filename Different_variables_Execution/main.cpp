#include <iostream>
using namespace std;
int main()
{
    /***************************
     * Character type
     * **************************/
     char middle_initial{'A'};
    cout <<"My last intial is"<< middle_initial<<endl;
    //integer types 
    unsigned short int exam_score {55};
    cout <<"My exam score was"<< exam_score;
    long people_in_florida {20610000};
    cout<<"Number of people in florida"<<people_in_florida <<"\n";
    
    long long people_on_earth {7'600'000'000};
    cout <<"There are about "<<people_on_earth<<"people on earth"<<endl;
    
    //floating point numbers
    float car_payment {401.23};
    cout <<"My car payment is" <<car_payment <<endl;
    double pi {3.14159};
    cout << "pi is" << pi <<endl;
    long double large_amount{2.7e120};
    cout <<large_amount <<"is a very big number" <<endl;
    
    // Boolean
    bool game_over {false};
    cout << "The value of game_over is" << game_over<<endl;
    
    return 0;
}