#include <iostream>

double const pi = 3.14;
class Cylinder
{
private:
    double base_radius;
    double height;

public:
    Cylinder(double r, double h)
    {
        base_radius = r;
        height = h;
    }
    // Getters

    double get_radius()
    {
        return base_radius;
    }
    double get_height()
    {
        return height;
    }

    // Setters
    void set_base_radius(double radius_param)
    {
        base_radius = radius_param;
    }
    void set_height(double height_param)
    {
        height = height_param;
    }

    double volume()
    {
        return pi * height * base_radius * base_radius;
    }
};

int main()
{
    Cylinder cylinder1(10, 20);
    std::cout << cylinder1.get_height() << std::endl; // Accessing private member values through getters
    std::cout << cylinder1.volume() << std::endl;

    cylinder1.set_height(165); // Changing private member values using setters
    cylinder1.set_base_radius(200);

    std::cout << cylinder1.volume() << std::endl;

    return 0;
}
/*Note
1.Private members cannot be accessed from outstide the class
2.However theor values can be obtained by using getters and setters.
3.The private members are manipulated by accessing them via custom functions
4.These functions are called getters to get their values and setters to modify their values.
5.Getters and setters must be set as public functions.
*/