#include <iostream>
#include <string>
using namespace std;

string salute(string name)
{
    string str = name + ", " + "hello!\n";
    return str;
}

int main() {
    string name;
    cout << "What is your name?" << endl;
    cin >> name;
    string nameOut = salute(name);
    cout << nameOut;
    return 0;
}
