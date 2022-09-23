#include <iostream>
#include <math.h>
using namespace std;

struct Solution {
    double x1;
    double x2;
    int roots;
};

void showSolution (Solution s) {
    if (s.roots == -1) cout << "There are no roots for this equation" << endl;
    else if (s.roots == 0) cout << "There is one root: x1 = x2 = " << s.x1 << endl;
    else cout << "There are two roots: x1 = " << s.x1 << ", x2 = " << s.x2 << endl;
}

Solution findRoots (double a, double b, double c) {
    double D = b * b - 4 * a * c;
    Solution s;
    if (D < 0) s.roots = -1;
    else {
        s.x1 = (-b + sqrt(D))/(2*a);
        s.x2 = (-b - sqrt(D))/(2*a);
        if (fabs(s.x1 - s.x2) < 1e-5) s.roots = 0;
        else s.roots = 1;
    }
    return s;
}

int main() {

    double a, b, c;
    cout << "Enter coefficients of equation (A*x^2 + B*x + C = 0): ";
    cin >> a >> b >> c;
    showSolution(findRoots(a, b, c));
    return 0;
}