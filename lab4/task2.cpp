#include <iostream>
using namespace std;

void swap(int*, int*);
void swap(int&, int&);

void print(double x, double y)
{
    cout << "x = " << x << "; y = " << y << endl;
}

int main() {

    int x = 5, y = 10;
    swap(&x, &y);
    print(x, y);

    swap(x, y);
    print(x, y);

    return 0;
}

void swap (int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void swap (int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}