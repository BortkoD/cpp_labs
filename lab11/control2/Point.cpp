#include "Point.h"
#include <math.h>

Point::Point (float newX, float newY) {
    x = newX;
    y = newY;
}

float Point::distanceToCenter (Point) {
    return sqrt(x*x + y*y);
}

std::ostream& operator<< (std::ostream& out, const Point& p) {
    out << "(" << p.x << ", " << p.y << ")"; 
    return out;
}

bool Point::operator< (const Point& p) const{
    if ((x*x + y*y) < (p.x*p.x + p.y * p.y)) return true;
    else return false;
}