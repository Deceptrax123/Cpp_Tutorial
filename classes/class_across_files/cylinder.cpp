#include "cylinder.h"

Cylinder::Cylinder(double r, double h)
{
    base_radius = r;
    height = h;
}
double Cylinder::volume() //:: is a scope resolution operator.
{

    return pi * height * base_radius * base_radius;
}
double Cylinder::get_radius()
{
    return base_radius;
}
double Cylinder::get_height()
{
    return height;
}

// Setters
void Cylinder::set_base_radius(double radius_param)
{
    base_radius = radius_param;
}
void Cylinder::set_height(double height_param)
{
    height = height_param;
}