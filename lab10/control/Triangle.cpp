#include "Triangle.h"
#include "Dot.h"
#include <cmath>

Triangle::Triangle()
{
    d1 = Dot(0, 0);
    d2 = Dot(0, 3);
    d3 = Dot(4, 0);
}

Triangle::Triangle(Dot a, Dot b, Dot c) 
{
    d1 = a;
    d2 = b;
    d3 = c;
    double s1, s2, s3;
    this -> getSides(s1, s2, s3);
    if (s1 + s2 <= s3 || s1 + s3 <= s2 || s3 + s2 <= s1)
        throw SideError();
}

void Triangle::getSides(double &side1, double &side2, double &side3)
{
    side1 = d1.distanceTo(d2);
    side2 = d3.distanceTo(d2);
    side3 = d1.distanceTo(d3);
}

void Triangle::showSides()
{
    double s1, s2, s3;
    this -> getSides(s1, s2, s3);
    cout << "Side 1: " << s1 << "; Side 2: " << s2 << "; Side 3: " << s3 << endl;
}

double Triangle::getPerimeter()
{
   double s1, s2, s3;
   this -> Triangle::getSides(s1, s2, s3);
   return (s1 + s2 + s3);
}

double Triangle::getSquare()
{
    double s1, s2, s3;
    this -> Triangle::getSides(s1, s2, s3);  
    double p = (s1 + s2 + s3) / 2;
    return sqrt(p * (p - s1) * (p - s2) * (p - s3));  
}