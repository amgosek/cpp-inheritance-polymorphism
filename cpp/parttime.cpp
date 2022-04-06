#include "parttime.h"
#include <string>
#include <iostream>

using namespace std;

ParttimeEmployee::ParttimeEmployee(string a, string b, string c, double _hourlyWage, int _hours)
{
    Employee::setName(a);
    Employee::setTitle(b);
    Employee::setEmail(c);
    Employee:Employee(a,b,c);
    hourlyWage = _hourlyWage;
    hours = _hours;
}
double ParttimeEmployee::calcGrossPay(){ 
    // calculate and return weekly pay = hours * hourlyWage
    double weeklyWage = hourlyWage * hours;
    return weeklyWage;
}
void ParttimeEmployee::displayEmployee(){
    cout << "Parttime Employee" << endl;
    Employee::displayEmployee();
    double weeklypay = calcGrossPay();
    
    cout << "Weekly Pay: " << weeklypay << endl;
}
