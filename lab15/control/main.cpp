#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

struct StudentGrade {
    string name;
    char grade;
};

int main() {

    map < string, vector<char> > journal;
    int n, c;
    string name;
    char grade;
    cout << "Enter number of student: " ;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << i+1 << ": ";
        cin >> name;
        cout << "Enter amount of his/her grades: ";
        cin >> c;
        for (int j = 0; j < c; j++) {
            cout << "Enter his/her grade: ";
            cin >> grade;
            journal[name].push_back(grade);
        }
    }

    cout << endl << "Journal:\n";
    map < string, vector<char> >::iterator iter = journal.begin();
    while (iter != journal.end()) {
        cout << iter->first << ": ";
        c = (iter->second).size();
        for (int i = 0; i < c; i++) {
            if (c - i > 1)
                cout << (iter->second)[i] << ", ";
            else 
                cout << (iter->second)[i] << ";" << endl;
        }
        iter++;
    }

    return 0;
}