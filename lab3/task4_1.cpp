#include <iostream>
using namespace std;

int addNumbers(int n)
{
    if (n == 1) return 1; // выход из рекурсии
    else return (n + addNumbers(n - 1));
}

int addNumbers (int from, int to) {
    if (from == to) return from;
    else return (from + addNumbers(from + 1, to));
}


int main() {

    int n;
    cout << "Please enter the number: ";
    cin >> n;
    cout << "Sum from 1 to " << n << " = " << addNumbers(n) << endl;

    int a, b;
    cout << "Please enter two numbers: ";
    cin >> a >> b;
    if (a > b) {
        int temp = a;
        a = b; b = temp;
    }
    cout << "Sum from " << a << " to " << b << " = " << addNumbers(a, b) << endl;


    return 0;
}