#pragma once /* Защита от двойного подключения заголовочного файла */
#include <string>
#include <iostream>
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

        class ExScore //класс исключений
        {
            public:
                string origin; //для имени функции
                int iValue; //для хранения ошибочного значения
                
                ExScore (string ori, int sc)
                {
                    origin = ori; //строка с именем виновника ошибки
                    iValue = sc; //сохраненное неправильное значение
                }
        };

    private:
        int scores[5];
        double average_score;
        string name;
        string last_name;
};