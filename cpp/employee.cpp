#include "employee.h"
#include <string>
#include <iostream>
using namespace std;

Employee::Employee(){
    name = "";
    title = "";
    email = "";
}
Employee::Employee(string _name, string _title, string _email){
    name = _name;
    title = _title;
    email = _email;
}
void Employee::setName(string _name){
    name = _name;
}
void Employee::setTitle(string _title){
    title = _title;
}
void Employee::setEmail(string _email){
    email = _email;
}
void Employee::displayEmployee(){
    cout << "Name: " << name << "\n" 
    << "Title: " << title << "\n" 
    << "Email: " << email << endl; 
}
