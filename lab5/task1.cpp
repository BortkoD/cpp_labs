#include <iostream>
using namespace std;

int main() {

    const int n = 10;
    int mas[n];

    for (int i=0; i<n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }

    int s = 0, sp=0, s_even=0;
    int mx=-10000, mx_pos=-1, mn=10000, mn_pos=-1;
    long long multi = 1;
    double avg = 0;
    for (int i=0; i<n; i++)
    {
        s += mas[i];
        if (mas[i] > 0) sp += mas[i];

        if (i % 2 == 0) s_even += mas[i];

        if(mas[i] > mx) {
            mx = mas[i];
            mx_pos = i;
        }

        if(mas[i] < mn) {
            mn = mas[i];
            mn_pos = i;
        }

    } 

    for (int i = min(mn_pos, mx_pos) + 1; i < max(mn_pos, mx_pos); i++) {
        multi *= mas[i];
    }

    avg = s / n;

    cout << "The sum is " << s;
    cout << "\nAverage value is " << avg;
    cout << "\nSum of positives = " << sp;
    cout << "\nSum of negatives = " << (s - sp);
    cout << "\nSum on even positions = " << s_even;
    cout << "\nSum on odd positions = " << (s - s_even);
    cout << "\nMax = " << mx;
    cout << "\nMin = " << mn;
    cout << "\nmultiplication of elements between maximum and minimum = " << multi << endl;


    return 0;
}