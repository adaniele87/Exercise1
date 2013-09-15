#ifndef _AD_MANAGER_H_
#define _AD_MANAGER_H_

#include "Employee.h"

class Manager
{
    int totalHours;
public:
    Manager();
    void getWorkerHours(Employee* emp);
    void report();
};

#endif