#ifndef FULLTIME_H
#define FULLTIME_H
#include "employee.h"
#include <string>
using namespace std;

class FulltimeEmployee : public Employee{
    double salary;
    string a;
    string b;
    string c;
public:
    FulltimeEmployee(string a, string b, string c, double _salary);
    void displayEmployee();
};


#endif
