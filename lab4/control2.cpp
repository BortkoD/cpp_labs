#include <iostream>
using namespace std;

int main() {

    int a, b;
    if(Input(a,b)== false) // if(!Input(a,b))
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;

    return 0;
}