#include <iostream>
using namespace std;

template<class T>
double avg(T arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return (sum / size);
}

int main()
{
    int arr_i[] = {0, 1, 2, 3, 4, 5};
    cout << avg(arr_i, 6) << endl;

    long arr_l[] = {1000001, 1003332, 1000003};
    cout << avg(arr_l, 3) << endl;

    double arr_d[] = {1.1, 1.2, 1.3, 1.4, 1.5};
    cout << avg(arr_d, 5) << endl;

    char arr_c[] = {'a', 'b', 'c', 'd', 'e'};
    cout << avg(arr_c, 5) << endl;
    return 0;
}