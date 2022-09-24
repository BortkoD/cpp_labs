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
    cout << "Enter one integer to calculate the quotient:\n";
    int number1;
    cin >> number1;
    for (int i = -10; i < 10; i++)
    {
        try
        {
            float result = quotient(number1, i);
            cout << "Quotient = " << result << endl;
        }
        catch (DivideByZeroError& error)
        {
            cout << "ERROR: ";
            error.printMessage();
        }
    }
    return 0; // normal ending of program
}