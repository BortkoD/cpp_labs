#include <iostream>
using namespace std;

int main() {
    
    float x, y;

    cin >> x >> y;
    if (x * x + y * y < 9 &&y > 0)
        cout << "in";
    else if (x * x + y * y> 9 || y< 0)
        cout << "out";
    else 
        cout << "on the border";

    return 0;
}