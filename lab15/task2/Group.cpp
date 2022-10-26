#include <iostream>
#include <string>
#include "Group.h"
#include "student.h"

using namespace std;

Group::Group(string name)
{
	this->name = name;
}

Group::Group()
{
	name = "smt";
}

void Group::setName(string newName)
{
    name = newName;
}

string Group::getName()
{
    return name;
}

int Group::getSize()
{
    return masSt.size();
}

void Group::addStudent(Student* newStudent)
{
    masSt.insert(newStudent);
}

void Group::delStudent(Student* oldStudent)
{
    masSt.erase(oldStudent);
}

void Group::GroupOut()
{
    iter = masSt.begin();
    while( iter != masSt.end() )
        (*iter++)->display();
}

Student* Group::findStudent(string searchName, string searchLastName, IdCard* searchId)
{
    Student *temp = new Student(searchName, searchLastName, searchId);
    iter = masSt.lower_bound(temp);
    delete temp;
    return(*iter);
}