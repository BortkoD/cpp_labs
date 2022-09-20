#include <iostream>
#include <string>
using namespace std;

int Input (int &ai, int &bi) {
    cout << "Please enter two numbers: ";
    cin >> ai >> bi;
    if (cin.fail()) return 0; // checks if an error has occurred while reading

    if (ai < 0 || bi < 0) return 0;
    else return 1;
}

int main() {

    int a, b;
    if(Input(a, b)== false) // if(!Input(a,b))
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;
    cout << "The sum is "<< s << endl;

    return 0;
}