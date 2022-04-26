#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"

class Cylinder
{
    // Private members
private:
    double base_radius;
    double height;

    // Public methods
public:
    Cylinder(double r, double h);
    // Getters
    double get_radius();

    double get_height();

    // Setters
    void set_base_radius(double radius_param);

    void set_height(double height_param);

    // computes volume
    double volume();
};

#endif