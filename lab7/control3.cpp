#include <iostream>
#include <math.h>
#include <tuple>
using namespace std;

struct Solution {
    double x1;
    double x2;
};

void showSolution (tuple<Solution, int> res) {
    Solution s = get<0>(res);
    int roots = get<1>(res);
    if (roots == -1) cout << "There are no roots for this equation" << endl;
    else if (roots == 0) cout << "There is one root: x1 = x2 = " << s.x1 << endl;
    else cout << "There are two roots: x1 = " << s.x1 << ", x2 = " << s.x2 << endl;
}

tuple<Solution, int> findRoots (double a, double b, double c) {
    double D = b * b - 4 * a * c;
    Solution s;
    int roots;
    if (D < 0) roots = -1;
    else {
        s.x1 = (-b + sqrt(D))/(2*a);
        s.x2 = (-b - sqrt(D))/(2*a);
        if (fabs(s.x1 - s.x2) < 1e-5) roots = 0;
        else roots = 1;
    }
    return make_tuple(s, roots);
}

int main() {

    double a, b, c;
    cout << "Enter coefficients of equation (A*x^2 + B*x + C = 0): ";
    cin >> a >> b >> c;
    showSolution(findRoots(a, b, c));
    return 0;
}