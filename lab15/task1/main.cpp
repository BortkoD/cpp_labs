#include <iostream>
#include <string>
#include "student.cpp"
#include "IdCard.cpp"
#include "Group.cpp"

using namespace std;

int main()
{
    string name;
    string last_name;
	IdCard* idc = new IdCard(654320, "smt");
	IdCard* idc2 = new IdCard(654321, "smt");

    cout << "Name: ";
    getline(cin, name);

    cout << "Last name: ";
    getline(cin, last_name);

    Student *student02 = new Student(name, last_name, idc);
    Student student03 ("Петр", "Петров", idc2);
    Student student04 ("Семен", "Смирнов", idc);
    Student student05 ("Саша", "Коен", idc2);
    Student student06 ("Дмитрий", "Ионов", idc);

    Group gr1957("1957");

    gr1957.addStudent(*student02);
    gr1957.addStudent(student03);
    gr1957.addStudent(student04);
    gr1957.addStudent(student05);
    gr1957.addStudent(student06);

    int k = gr1957.getSize();
    gr1957.GroupSort();

    cout << "В группе "<< gr1957.getName() <<" "<<k<<" ст." << endl;
    gr1957.GroupOut();
    cout << endl << "New list:" << endl;

    gr1957.delStudent(student05);
    gr1957.delStudent(gr1957.findStudent("Семен", "Смирнов", idc));

    gr1957.GroupOut();

	return 0;
}
