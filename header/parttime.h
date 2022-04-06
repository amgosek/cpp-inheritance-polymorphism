#ifndef PARTTIME_H
#define PARTTIME_H
#include "employee.h"
#include <string>

class ParttimeEmployee : public Employee{
    double hourlyWage;
    int hours;
    string a;
    string b;
    string c;
public:
    ParttimeEmployee(string a, string b, string c, double _hourlyWage, int _hours);
    double calcGrossPay(); // calculate and return weekly pay = hours * hourlyWage
    void displayEmployee();
};


#endif
