#include <iostream>

using namespace std;

double pi {3.14159};
double calc_area_circle (double radius); // function prototype
double area_circle(); // area of a circle
void volume_of_a_cylinder(); // volume of cylinder prototype

int main()
{
    volume_of_a_cylinder();
    return 0;
}

double calc_area_circle (double radius) 
{
    return pi*radius;
}
double area_circle() 
{
    double radius{};
    cout << "Enter the Radius of the circle: ";
    cin >> radius;
    cout << "The area of a circle with radius" << radius << " is " << calc_area_circle(radius)<< endl;
    return calc_area_circle(radius);
}
void volume_of_a_cylinder()
{
double height{};
double area_cylinder{};
cout << "Enter the height: "<<endl;
cin >> height;
area_cylinder = area_circle()*height;
cout << "The area is: "<<area_cylinder <<endl;
}
