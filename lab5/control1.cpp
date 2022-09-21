#include <iostream>
using namespace std;

int sum (const int mas[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        s += mas[i];

    return s;
}

double avg (const int mas[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        s += mas[i];

    return (s / n);
}

int positive_sum (const int mas[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (mas[i] > 0) s += mas[i];
    }

    return s;
}

int even_sum (const int mas[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) s += mas[i];
    }
    return s;
}

int max_arr (const int mas[], int n, int &pos) {
    int mx = -1e+9;
    for (int i = 0; i < n; i++) {
        if (mas[i] > mx) 
        {
            mx = mas[i];
            pos = i;

        }
    }
    return mx;
}

int min_arr (const int mas[], int n, int &pos) {
    int mn = 1e+9;
    for (int i = 0; i < n; i++) {
        if (mas[i] < mn) {
            mn = mas[i];
            pos = i;
        }
    }
    return mn;
}

long long multi (const int arr[], int p1, int p2) {
    long long mp = 1;
    while (p1 < p2) 
        mp *= arr[p1++];
    return mp;
}

void sort_arr (int arr[], int n) {
    int min = 0;
    int buf = 0;   
    
    for (int i = 0; i < n; i++)
    {
        min = i;
        
        for (int j = i + 1; j < n; j++)
            min = ( arr[j] < arr[min] ) ? j : min;
        
        if (i != min)
        {
            buf = arr[i];
            arr[i] = arr[min];
            arr[min] = buf;
        }
    }
}

void print_arr (const int arr[], int n) {
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "array[" << i << "] = ";
        cin >> arr[i];
    }

    cout << "The sum is " << sum(arr, n);
    cout << "\nAverage value is " << avg(arr, n);
    cout << "\nSum of positives = " << positive_sum(arr, n);
    cout << "\nSum on even positions = " << even_sum(arr, n);

    int max_pos = 0, min_pos = 0;
    cout << "\nMax = " << max_arr (arr, n, max_pos);
    cout << "\nMin = " << min_arr (arr, n, min_pos);
    cout << "\nMultiplication of elements between maximum and minimum = " << multi(arr, min(max_pos, max_pos)+1, max(max_pos, max_pos)) << endl;

    sort_arr(arr, n);
    cout << "Sorted array: ";
    print_arr(arr, n);

    return 0;
}