#include "fulltime.h"
#include <string>
#include <iostream>

using namespace std;

FulltimeEmployee::FulltimeEmployee(string a, string b, string c, double _salary){
    Employee::setName(a);
    Employee::setTitle(b);
    Employee::setEmail(c);
    Employee:Employee(a,b,c);
    salary = _salary;
}
void FulltimeEmployee::displayEmployee(){
    cout << "Fulltime Employee" << endl;
    Employee::displayEmployee();
    
    cout << "Salary: " << salary << endl;
}
