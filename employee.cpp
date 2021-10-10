#include "employee.h"
#include <iostream>
using namespace std;

Employee::Employee(const string& fn,const string& ln,const string& ssn)
{
    firstName = fn;
    lastName = ln;
    socialSecurityNumber = ssn;
}

void Employee::setfirstName(const string &name)
{
    firstName = name;
}

void Employee::setlastName(const string& name)
{
    lastName = name;
}

void Employee::setsocialSecurityNumber(const string& number)
{
    socialSecurityNumber = number;
}

string Employee::getfirstName() const
{
    return firstName;
}

string Employee::getlastName() const
{
    return lastName;
}

string Employee::getsocialSecurityNumber() const
{
    return socialSecurityNumber;
}

void Employee::print() const
{
    cout<< getfirstName() << " " << getlastName()<< "\n";
    cout<< "social security number : " << getsocialSecurityNumber() << "\n";
}
