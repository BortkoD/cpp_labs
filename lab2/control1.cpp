#include <iostream>
#include <cmath>
#include <set>
using namespace std;

int main() {
    
    int n;
    cout << "Please, enter the number: ";
    cin >> n;

    if (n < 2 || n%2 == 0) cout << "No, it is not super prime" << endl;
    else {
        int arr[n / 2] = {};
        set <int> primes; // set is the best choice if u need to check if u have a certain element
        primes.insert(2);

        //  finding prime numbers using the sieve of eratosthenes
        for (int i = 3; i <= n; i += 2) {
            if (arr[i / 2 - 1] == 0) {
                primes.insert(i);
                for (int j = i; i * j <= n; j += 2) arr[ i * j / 2 - 1] = 1;
            }
        }

        // checking if n is prime and its position is prime
        if (arr[n / 2 - 1] == 0 && primes.find(primes.size()) != primes.end() ) 
            cout << "Yes, it is super prime" << endl;
        else 
            cout << "No, it is not super prime" << endl;
    }

    return 0;
}