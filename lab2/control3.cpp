#include <iostream> 
using namespace std;

int main() {
    int coins[] = {10, 5, 2, 1};
    int ex;
    int total = 0; 

    cout << "Please, enter the exchange amount: ";
    cin >> ex;

    for (int i = 0; i < 4; i++ ) {
        total += ex / coins[i];
        ex %= coins[i];
    } 

    cout << "You will get " << total << " coin(s)" << endl;

    return 0;
}
