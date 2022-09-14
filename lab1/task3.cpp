#include <iostream>
#include <cmath> // library with math functions
#include <iomanip> // library for cin-cout manipulating
using namespace std;

int main() 
{
    double P;

    cout << "Please, enter value of the perimeter: ";
    cin >> P;

    double side = P / 3, p = P / 2; // calculating the side and semi-perimeter of ​​a triangle
    double S =  sqrt( p * (p - side) * (p - side) * (p - side) ); // calculating the square of ​​a triangle

    cout << endl << setw(6) << left << "Side";
    cout << setw(6) << left << "Square" << endl;
    cout << setw(6) << setprecision(3) << left << side;
    cout << setw(6) << left << setprecision(3) << S << endl;

    return 0;
}