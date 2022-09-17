#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

long double firBinSearch(double a, int n)
{
    double L = 0;
    double R = a;
    while (R - L > 1e-10)
    {
        double M = (L + R) / 2;
        if (pow(M, n) < a) {
            L = M;
        }
        else {
            R = M;
        }
    }
    return R;
}

int main() {

    double a;
    int n;
    cout << "Please enter a and n: ";
    cin >> a >> n;

    double ans = firBinSearch(a, n);

    cout << setprecision(7) << ans << endl;

    return 0;
}