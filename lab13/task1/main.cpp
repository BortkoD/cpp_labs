#include "paperbook.cpp"
#include "audiobook.cpp"

int main() {
    Item* pubarr [100];
    int n = 0;
    char choice;
    do
    {
        cout << "\nВводить данные для книги или звукового файла (b/a)?";
        cin >> choice;
        if(choice == 'b')
            pubarr[n] = new Paperbook;
        else
            pubarr[n] = new AudioBook;
        
        pubarr[n++]->getdata();
        cout << "Продолжать (у/n)?";
        cin >> choice;
    }
    while(choice == 'y');

    for(int j=0; j<n; j++) //цикл по всем объектам
        pubarr[j]->putdata(); //вывести данные о публикации
    
    cout << endl;

    return 0;
}