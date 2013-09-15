#include "Employee.h"
#include <string.h>
#include <iostream>
#include "Manager.h"

Employee::Employee()
{
    ID = 0;
    name = nullptr;
    boss = nullptr;
    hours = 0;
}

Employee::Employee(int id, char* name)
{
   ID = id;
   this->name = new char[strlen(name)+1];
   strcpy(this->name, name);
   boss = nullptr;
   hours = 0;
}

Employee::Employee(Employee& emp)
{
    name = nullptr;
    boss = nullptr;
    *this = emp;
}

Employee::~Employee()
{
    if(name != nullptr)
        delete [] name;
}

void Employee::setBoss(Manager* newBoss)
{
    boss = newBoss;
}

void Employee::work(int numOfHours)
{
    hours += numOfHours;
}

void Employee::report()
{
    if(boss)
    {
        boss->getWorkerHours(this);
        hours = 0;
    }
}

int Employee::getHours()
{
    return hours;
}

int Employee::getID()
{
    return ID;
}

char* Employee::getName()
{
    return name;
}

Employee& Employee::operator=(Employee& emp)
{
    if (this != &emp)
    {
        if (name != nullptr)
            delete [] name;

        name = new char[strlen(emp.name)+1];
        strcpy(name, emp.name);

        boss = emp.boss;
        ID = emp.ID;
        hours = emp.hours;
    }

    return *this;
}
