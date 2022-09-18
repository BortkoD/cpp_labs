#include <iostream>
using namespace std;

string binary (int num) {
    if (num == 0) return "";

    string s = "0";
    if (num % 2 == 1) 
        s = "1";

    return binary( num / 2 ) + s;
}

int main() {
    int n;
    cout << "Please enter a number in decimal notation: ";
    cin >> n;

    cout << "Your number in binary notation is " << binary(n) << endl;

    return 0;
}