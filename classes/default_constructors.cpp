#include <iostream>

double const pi = 3.14;
class Cylinder
{
private:
    double height{1};
    double base_radius{1};

public:
    Cylinder() = default; // Creates a default constructor

    Cylinder(double radius, double heightP) // Constructor overloading is  differentiated by number of parameters
    {
        height = heightP;
        base_radius = radius;
    }

public:
    double volume()
    {
        return pi * base_radius * base_radius * height;
    }
};

int main()
{
    Cylinder cylinder1;

    std::cout << cylinder1.volume() << std::endl;

    Cylinder cylinder2(10,4);
    std::cout<<cylinder2.volume()<<std::endl;
}