#include <iostream>

const double pi = 3.14;
class Cylinder
{
public:                     // members are private by default.public keywords makes members accessible outside the class
    double base_radius = 1; // on creating object and calling member methods,compiler reads constructors members first and ignores the declarations notwithin it.
    double height = 1;

public:
    Cylinder() // Constructors without parameters
    {
        base_radius = 2.0;
        height = 2.0;
    }
    Cylinder(double radius_para, double height_para) // Constructors with parameters
    {
        height = height_para;
        base_radius = radius_para;
    }
    double volume()
    {
        return pi * base_radius * base_radius * height;
    }
};

int main()
{
    Cylinder cylinder1(10, 4);

    double v1 = cylinder1.volume();
    std::cout << v1 << std::endl;

    Cylinder cylinder2;
    double v2 = cylinder2.volume();
    std::cout << v2 << std::endl;

    return 0;
}
/*Notes:
1.If no constructor is define,compiler generates its own constructur which is empty*/