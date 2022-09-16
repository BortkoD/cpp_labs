#include <iostream>
using namespace std;

int main() {
    
    string snils;
    cout << "Please, enter the snils code: ";
    cin >> snils;

    int control_number = (snils[9] - '0') * 10 + (snils[10] - '0'); // implicit string to number conversion
    int counted_control = 0;

    // checksum calculation
    for (int i = 0; i < 9; i++) {
        counted_control += (9-i) * (snils[i] - '0');
    }
    counted_control = (counted_control % 101 < 100 ? (counted_control % 101) : 0);

    if (counted_control == control_number) cout << "True";
    else cout << "False";

    return 0;
}