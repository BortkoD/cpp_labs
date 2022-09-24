#include <iostream>
#include <string>
using namespace std;
class DivideByZeroError
{
    public:
        DivideByZeroError (): message ("Divide by zero") { } // область за двоеточием - список инициализации членов. 
                                                             // Т.е. в этом месте мы инициализируем message. Это необходимо, т.к. у этой переменной 
                                                             // нет конструктора по умолчанию (также актуально в случае констант, т.к. то, что в 
                                                             // фигурных скобках, будет воспринято не как инициализация константы, а как присвоение
                                                             // ей значения, т.е. ошибка
        void printMessage () const {
            cout << message << endl;
        }
    private:
        string message;
};

float quotient (int numl, int num2)
{
    if (num2 == 0)
        throw DivideByZeroError();
    return (float)numl / num2;
}

int main ()
{
    cout << "Enter two integers to calculate their quotient:\n";
    int number1, number2;
    cin >> number1;
    cin >> number2;
    try
    {
        float result = quotient(number1, number2);
        cout << "Quotient = " << result << endl;
    }
    catch (DivideByZeroError& error) // возвращаемый объект - *this
    {
        cout << "ERROR: ";
        error.printMessage();
        return 1; // end the program because of error
    }
    return 0; // normal ending of program
}