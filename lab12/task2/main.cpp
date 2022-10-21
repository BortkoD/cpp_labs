#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"

int main()
{
    // Оценки студента
    std::vector<int> scores;

    // Добавление оценок студента в вектор
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(4);
    scores.push_back(4);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);

    student *stud = new student("Potter", "Harry", "James", scores);
    std::cout << stud->get_full_name() <<std::endl;
    std::cout << "Average score: "<< stud->get_average_score() <<std::endl;
    return 0;
}