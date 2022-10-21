#include "Distance.cpp"

int main()
{
    Distance d = Distance (2, 4);
    cout << float(d) << endl;
    float f = 3.4;
    cout << Distance(f);
    cout << d + f << endl;
    cout << f + d << endl;
}