#include <iostream>
#include <math.h>
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
    cin >> a >> n;

    double ans = firBinSearch(a, n);

    cout << ans;

    return 0;
}