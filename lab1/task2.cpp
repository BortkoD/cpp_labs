#include <iostream>
using namespace std;

int main()
{
//    system("chcp 1251"); // адекватный вывод кириллицы в консоль

    double a, b;
    string name;
    cout << "Введите a, имя и b:\n";
    cin >> a; // ввод с клавиатуры значения a
    cin >> name; // ввод имени
    cin >> b; // ввод с клавиатуры значения b
    double x = a / b; // вычисление значения x
    int x_int = a / b; 

    cout.precision(3); // задание точности вывода - 3 знака после запятой
    cout << "\ndouble x = " << x << "; size = " << sizeof(x) << endl; // вывод на экран результата вычислений и объема занимаемой памяти
    cout << "int x = " << x_int << "; size = " << sizeof(x_int) << endl;
    cout << "Hello, " << name << "!" << endl;

    return 0;
}