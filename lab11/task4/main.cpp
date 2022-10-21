#include "GradeMap.cpp"

int main()
{
    GradeMap grades;
    grades["John"] = 'A';
    grades["Martin"] = 'B';
    cout << "John has a grade of " << grades["John"] << endl;
    cout << "Martin has a grade of " << grades["Martin"] << endl;
    cout << "New name and grade?" << endl;
    string name;
    char grade;
    cin >> name >> grade;
    grades[name] = grade;
    std::cout << name << " has a grade of " << grades[name] << endl;
    return 0;
}