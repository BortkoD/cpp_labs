#include <iostream>
#include "student.cpp"
#include "IdCard.cpp"

int main()
{
    string name;
    string last_name;
    IdCard *idc = new IdCard(123, "Базовый");

    cout << "Name: ";
    getline(std::cin, name);
    cout << "Last name: ";
    getline(std::cin, last_name);

    int scores[5];
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        cout << "Score " << i+1 << ": ";
        cin >> scores[i];
        sum += scores[i];
    }

    Student *student02 = new Student(name, last_name, idc);

    student02 -> set_scores(scores);
    float average_score = sum / 5.0;
    student02 -> set_average_score(average_score);

    cout << "Average ball for " << student02->get_name() << " "
    << student02->get_last_name() << " is "
    << student02->get_average_score() << endl;

    cout << "IdCard: " << student02->getIdCard().getNumber() << endl;
    cout << "Category: " << student02->getIdCard().getCategory() << endl;

    delete student02;
    return 0;
}