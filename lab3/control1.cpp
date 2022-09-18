#include <iostream>
#include <string>
using namespace std;

bool checking (string snils) {
    string valid_snils = "";
    // finding the snils + checksum number
    for (int i = 0; i < snils.size(); i++) {
        if (snils[i] >= '0' && snils[i] <= '9') valid_snils += snils[i];
        else if (snils[i] != ' ' && snils[i] != '-' ) return false;
    }

    int control_number = (valid_snils[9] - '0') * 10 + (valid_snils[10] - '0'); // implicit string to number conversion
    int counted_control = 0;

    // checksum calculation
    for (int i = 0; i < 9; i++) {
        counted_control += (9-i) * (valid_snils[i] - '0');
    }
    counted_control = (counted_control % 101 < 100 ? (counted_control % 101) : 0);

    if (counted_control == control_number) return true;
    else return false;
}

int main() {

    string snils = "";
    cout << "Please, enter the snils code: ";
    getline(cin, snils);

    if( checking(snils) ) cout << "True" << endl;
    else cout << "False" << endl;

    return 0;
}