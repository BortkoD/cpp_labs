#include <iostream>
#include <math.h>
using namespace std;

double sqrt3 (int a) {
    return pow(a, 1.0/3);
}

double iter_sqrt (double a, double x, double x1) {
    while (true) {
        x1 = (1.0 / 3) * (a / (x * x) + 2 * x);

        if (abs(x - x1) < 0.001) break;

        x = x1;
    }
    return x;
}

int main() {
    double a;
    cout << "Please, enter the number: ";
    cin >> a;

    cout << "With the built in function we get "<< sqrt3(a) << endl;
    cout << "With the iterative formula, we get " << iter_sqrt (a, a, 0) << endl;

    return 0;
}