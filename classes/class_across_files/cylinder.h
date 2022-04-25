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

    // computes volume
    double volume()
    {
        return pi * height * base_radius * base_radius;
    }
};

#endif