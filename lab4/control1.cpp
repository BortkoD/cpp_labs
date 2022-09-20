#include <iostream>
#include <math.h>
using namespace std;

int Myroot(double, double, double, double&, double&);

int main() {

    double a, b, c;
    double x1=0, x2=0;
    cout << "Please enter coefficients a, b, c (ax^2 + bx + c = 0): ";
    cin >> a >> b >> c;

    if (Myroot(a, b, c, x1, x2) == -1) cout << "Equation has no roots" << endl;
    else if (Myroot(a, b, c, x1, x2) == 0) cout << "Equation has one root. x1 = x2 = " << x1 << endl; 
    else cout << "Equation has two roots. x1 = " << x1 << ", x2 = " << x2 << endl;

    return 0;
}

int Myroot(double a, double b, double c, double &x1, double &x2) {
    double D = b * b - 4 * a * c;
    if (D < 0) return -1;
    else {
        x1 = (-b - sqrt(D)) / (2*a);
        x2 = (-b + sqrt(D)) / (2*a);
        if (fabs(x1 - x2) < 1e-7) return 0;
        else return 1;
    } 
}