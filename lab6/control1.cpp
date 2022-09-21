#include <iostream> 
#include <fstream>
#include <string> 
using namespace std;

int main() {

    string str = "";

    ofstream out ("poetry.txt", ios::out | ios::trunc ); // open file for writing and clean it before this

    cout << "Please, type 'end' when you stop writting the poem" << endl;

    while (true) {
        getline(cin, str, '\n');
        if (str != "end") {
            out << str << "\n"; // str += '\n'; out.write(str.data(), sizeof(str)); // str.data() returns a pointer to an array with equal char sequence
        }
        else break;
    }

    out.close();

    return 0;
}