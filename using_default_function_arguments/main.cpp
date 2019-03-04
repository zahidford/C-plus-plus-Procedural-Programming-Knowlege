#include <iostream>

using namespace std;

double calc_cost (double base_cost, double tax_rate = 0.06);

double calc_cost (double base_cost, double tax_rate)
{
    return base_cost +=(base_cost*tax_rate);
    
}
int main()
{
    double cost{0};
    cost = calc_cost(20);
    cout <<"cost is "<< cost << endl;
    return 0;
}
