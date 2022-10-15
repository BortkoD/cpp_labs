#include "Dot.h"
#include <math.h>
#include <iostream>

Dot::Dot()
{
    x = 0; 
    y = 0;
}

Dot::Dot(double x, double y)
{
    this -> x = x;
    this -> y = y;
}

double Dot::distanceTo(Dot point)
{
    double difX = point.x - x;
    double difY = point.y - y;
    return sqrt(pow(difX, 2) + pow(difY, 2));
}