#include "Distance.h"
using namespace std;

std::ostream& operator<< (std::ostream &out, const Distance &dist)
{
    out << dist.feet << "\'-" << dist.inches << "\'\n";
    return out;
}