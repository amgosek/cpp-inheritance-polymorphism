#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee{
    string name;
    string title;
    string email;
public:
    Employee();
    Employee(string _name, string _title, string _email);
    void setName(string _name);
    void setTitle(string _title);
    void setEmail(string _email);
    virtual void displayEmployee();
};

#endif
