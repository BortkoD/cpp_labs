#include "Distance.h"
using namespace std;

std::ostream& operator<< (std::ostream &out, const Distance &dist)
{
    out << dist.feet << "\'-" << dist.inches << "\'\n";
    return out;
}

Distance Distance::operator+ (const Distance& d2) const
{
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if (i>= 12.0)
    {
        i -= 12.0;
        f++;
    }
    return Distance (f, i);
}

Distance Distance::operator- (const Distance& d2) const
{
    int f = feet - d2.feet;
    float i;
    if (inches >= d2.inches)
        i = inches - d2.inches;
    else
    {
        f--;
        i = inches + 12 - d2.inches;
    }
    return Distance (f, i);
}

Distance Distance::operator+ (const float& fl) const 
{
    Distance d2 = Distance(fl);
    int f = feet + d2.feet;
    float i = inches + d2.inches;
    if (i >= 12.0)
       f++;
    return Distance (f, i);
}
        
float operator+ (const float fl, const Distance& dist) 
{
    return fl + float(dist);
}