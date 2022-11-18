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

    map < int, StudentGrade > journal;
    int n, c;
    StudentGrade newGrade;
    cout << "Enter number of grades: " ;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << i+1 << ": ";
        cin >> newGrade.name;
        cout << "Enter his/her grade: ";
        cin >> newGrade.grade;
        journal[i+1] = newGrade;
    }

    cout << endl << "Journal:\n";
    map < int, StudentGrade > ::iterator iter = journal.begin();
    while (iter != journal.end()) {
        cout << iter->first << ": ";
        cout << (iter->second).name << ", " << (iter->second).grade << endl;
        iter++;
    }

    return 0;
}