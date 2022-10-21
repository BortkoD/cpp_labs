#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"

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

    unsigned int teacher_work_time = 168;
    teacher *tch = new teacher("Snape", "Severus", "Snape", teacher_work_time);
    
    stud->get_info();
    std::cout << std::endl;
    tch->get_info();

    return 0;
}