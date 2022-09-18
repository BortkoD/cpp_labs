#include <iostream>
using namespace std;

int summarize (int n) {
    if (n == 0) return 0; 
    return (5*n + summarize(n-1));
}

int main() {
    int n;
    cout << "Please enter N value: ";
    cin >> n;
    
    int S = summarize(n);

    cout << "The sum is " << S << endl;

    return 0;
}