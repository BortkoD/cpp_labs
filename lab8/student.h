#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>
using namespace std;

class Student
{
    public:
        void set_name(string);
        string get_name();
        void set_last_name(string);
        string get_last_name();
        void set_scores(int []);
        void set_average_score(double);
        double get_average_score();

        Student(string, string);
        void save();
        ~Student();

    private:
        int scores[5];
        double average_score;
        string name;
        string last_name;
};