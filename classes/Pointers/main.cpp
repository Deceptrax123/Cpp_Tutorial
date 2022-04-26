#include <iostream>
#include "constants.h"
#include "cylinder.h"

int main()
{
    Cylinder cylinder1(10, 20);
    std::cout << cylinder1.volume() << std::endl;

    Cylinder *p_cylinder1 = &cylinder1;              // Pointer that points to a stack object
    std::cout << p_cylinder1->volume() << std::endl; // Arrow notation to call objects through pointers.

    // Creating cylinder heap objects through pointers
    Cylinder *cylinder_2 = new Cylinder(15, 40);
    std::cout << cylinder_2->volume() << std::endl;

    std::cout << cylinder_2->get_radius() << std::endl;

    delete cylinder_2; // Release memory allocated(!important)

    return 0;
}
