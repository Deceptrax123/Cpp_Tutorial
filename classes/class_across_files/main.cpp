#include <iostream>
#include "constants.h"
#include "cylinder.h"

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
