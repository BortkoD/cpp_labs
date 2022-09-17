#include <iostream>
#include <string>
using namespace std;

string salute(string name)
{
    string str = name + ", " + "hello!\n";
    return str;
}

void salute(string name, int k)
{
    cout << name << ", " << "hello! " << "you input " << k << endl;
}

int main() {
    string name;
    int k;

    cout << "What is your name?" << endl;
    cin >> name;
    string nameOut = salute(name);
    cout << nameOut;

    cout << "Input number:" << endl;
    cin >> k;
    salute(name, k);

    return 0;
}
