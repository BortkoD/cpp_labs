#include <iostream>
using namespace std;

void show_array(const int Arr[],const int N)
{
    for (int i = 0; i < N; i++)
    cout << Arr[i] <<" ";
    cout << "\n";
}

bool from_min(const int a, const int b)
{
    return a>b;
}

bool from_max(const int a, const int b)
{
    return a<b;
}

void bubble_sort(int Arr[], const int N, bool (*compare)(int a,int b))
{
    for (int i=1; i < N; i++)
    {
        for (int j=0; j < N-1; j++)
        {
            if ((*compare)(Arr[j], Arr[j+1])) swap(Arr[j], Arr[j+1]);
        }
    }
}

int main() {

    const int n = 10;
    int ch = 0;

    int mas[n] = {3, 7, 11, 5, 2, -6, 98, 6, 0, 13};
    bool (*from_f[2])(int, int) = { from_min, from_max };

    cout << "1. Sort ascending\n";
    cout << "2. Sort descending\n";
    cin >> ch;
    cout << "Initial data: ";
    show_array(mas, n);

    bubble_sort(mas, n, (from_f[ch - 1]));

    show_array(mas, n);

    return 0;
}