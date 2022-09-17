#include <iostream>
#include <string>
using namespace std;

void salute(string name);

int main() {
    string name;
    cout << "What is your name?" << endl;
    cin >> name;
    salute(name);
    return 0;
}

void salute(string name)
{
    cout << name << ", " << "hello!" << endl;
}