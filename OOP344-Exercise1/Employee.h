#ifndef _AD_EMPLOYEE_H_
#define _AD_EMPLOYEE_H_
class Manager;

class Employee
{
private:
    int ID;
    char* name;
    Manager* boss;
    int hours;
public:
    Employee();
    Employee(int id, char* name);
    Employee(Employee& emp);
    ~Employee();
    void setBoss(Manager* newBoss);
    void work(int numOfHours);
    void report();
    int getHours();
    int getID();
    char* getName();
    Employee& operator= (Employee& emp);
};

#endif