#include <iostream>
using namespace std;

int gcd(int m, int n)
{
    if (n == 0) return m;
    return gcd(n, m % n);
}

int main() {

    int a, b;
    cout << "Please enter two numbers: ";
    cin >> a >> b;
    if (a < b) {
        int temp = a;
        a = b; b = temp;
    }

    cout << "gcd for (" << a << ", " << b << ") = " << gcd(a, b) << endl;

    return 0;
}