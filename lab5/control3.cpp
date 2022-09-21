#include <iostream>
using namespace std;

int search (int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key && i != 0) {
            swap(arr[i], arr[i-1]);
            return (i-1); 
        } 
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++ ) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter key value: ";
    cin >> key;
    cout << "Current key position is " << search(arr, n, key) << endl;

    for (int i = 0; i < n; i++ ) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}