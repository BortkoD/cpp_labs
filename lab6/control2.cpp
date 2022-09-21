#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int N = 10;
    int a[N]={ 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };
    int min = 0; // для записи минимального значения
    int buf = 0; // для обмена значениями   

    ofstream out ("arrays.txt", ios::trunc);

    for (int i = 0; i < N; i++) out << a[i]  << " ";
    out << '\n';
    
    for (int i = 0; i < N; i++)
    {
        min = i; // номер текущей ячейки, как ячейки с минимальным значением
        
        // в цикле найдем реальный номер ячейки с минимальным значением
        for (int j = i + 1; j < N; j++)
            min = ( a[j] < a[min] ) ? j : min;
        
        // перестановка этого элемента, поменяв его местами с текущим
        if (i != min)
        {
            buf = a[i];
            a[i] = a[min];
            a[min] = buf;
        }
    }

    for (int i: a)
        cout << i << " ";

    for (int i = 0; i < N; i++) out << a[i]  << " ";
    out.close();

    return 0;
}