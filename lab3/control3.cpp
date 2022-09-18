#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double square (double a) {
    double S = a * a * sqrt(3) / 4;
    return S;

}

double square (double a, double b, double c) {
    double p = (a + b + c) / 2.0;
    double S = sqrt( p * (p - a) * (p - b) * (p - c));

    return S;

}

int main() {

    char type = '-';
    double a = 0, b = 0, c = 0;
    double S;

    do {
        cout << "Choose the triangle type (S - scalene triangle, E - equilateral triangle): ";
        cin >> type;
    }
    while (type != 'S' && type != 'E');

    if (type == 'S') {
        do {
            cout << "Enter length of three sides: " << endl;
            cin >> a >> b >> c;
        }
        while (a <= 0 || b <= 0 || c <= 0 || a+b <= c || a+c <= b || a+b <= c); // check if the triangle exists
        S = square(a, b, c);
    }
    else {
        do {
            cout << "Enter side length: " << endl;
            cin >> a;
        }
        while (a <= 0); // check if the triangle exists
        S = square(a);
    }

    cout << "Square of the triangle is " << setprecision(2)<< S << endl; 

    return 0;
}