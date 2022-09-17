#include <iostream>
using namespace std;

int addNumders(int n)
{
    if (n == 1) return 1; // выход из рекурсии
    else return (n + addNumders(n - 1));
}


int main() {


    return 0;
}