#include <iostream>
using namespace std;

int main() {
    
    int a, b, temp;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;

    do
    {
        if (a > b)
            a -= b; // аналогично выражению a = a - b
        else if (a < b)
            b -= a;
    }
    while (a != b);

    cout << "НОД = " << a << endl;

    return 0;
}