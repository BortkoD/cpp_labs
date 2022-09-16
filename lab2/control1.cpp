#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    long long n;
    cout << "Please, enter the number: ";
    cin >> n;
    bool prime = true;

    if( n <= 2 || n % 2 == 0) prime = false;
    else 
    {
        // checking if the number is prime
        for (long long j = 3; j <= sqrt(n); j += 2) 
            if (n % j == 0) prime = false;

        // finding number position in prime's list
        if (prime) 
        {
            long long counter = 1;
            bool flag;
            for (long long i = 3;  i <= n; i += 2) 
            {
                flag = true;
                for (long long j = 3; j <= sqrt(i); j += 2) 
                {
                    if (i % j == 0) 
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag) counter++;
            }
            
            // checking if the number's position is prime
            if (counter % 2 == 0 && counter != 2) prime = false;
            else 
            {
                for (long long j = 3; j <= sqrt(n); j += 2)
                    if (n % j == 0) prime = false;
            }
        }
    }

    if (prime)
        cout << "Yes, " << n << " is super prime" << endl;
    else 
        cout << "No, " << n << " is not super prime" << endl;
    return 0;
}