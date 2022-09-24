#include <iostream>
#include "student.h"
#include "student.cpp"

int main()
{
    string name;
    string last_name;

    cout << "Name: ";
    getline(std::cin, name);
    cout << "Last name: ";
    getline(std::cin, last_name);

    Student *student02 = new Student(name, last_name);

    int scores[5];
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        cout << "Score " << i+1 << ": ";
        cin >> scores[i];
        sum += scores[i];
    }

    student02 -> set_name(name); // -> оператор косвенного обращения
    student02 -> set_last_name(last_name);
    try {
        student02 -> set_scores(scores);
    }
    catch(Student::ExScore& ex)
    {

    cout << "\nОшибка инициализации " << ex.origin;
    cout << "\nВведенное значение оценки " << ex.iValue << " является недопустимым\n";
    }
    float average_score = sum / 5.0;
    student02 -> set_average_score(average_score);

    cout << "Average ball for " << student02->get_name() << " "
    << student02->get_last_name() << " is "
    << student02->get_average_score() << endl;

    delete student02;
    return 0;
}