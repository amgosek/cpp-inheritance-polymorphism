#include "employee.h"
#include "fulltime.h"
#include "parttime.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// create FulltimeEmployee object
	FulltimeEmployee emp1("Mary Davis", "Faculty", "md@waketech.edu", 60000.00);
	// create ParttimeEmployee object
	ParttimeEmployee emp2("Tom Fox", "Secretary", "tf@waketech.edu", 20.00, 30);
	// create an array of base class Employee pointers   
	Employee* employees[2];
	// assign the address of the two employee objects in the array
	// both emp1 and emp2 are also Employee objects
	employees[0] = &emp1;
	employees[1] = &emp2;
	// implement dynamic binding and polymorphism
	for (int i = 0; i < 2; i++)
	{
		cout << "Employee " << i + 1 << endl;
		// the same function call will generate different results depend on 
		// what employee object pointed to by the Employee pointer
		employees[i]->displayEmployee();
		cout << endl;
	}
	return 0;
}
