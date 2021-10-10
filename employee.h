#pragma once
#include <iostream>
using namespace std;

class Employee{
private :
    string firstName;
    string lastName;
    string socialSecurityNumber;
public :
    Employee(const string& fn,const string& ln,const string& ssn);

    void setfirstName(const string&);
    void setlastName(const string&);
    void setsocialSecurityNumber(const string& number);

    string getfirstName() const;
    string getlastName() const;
    string getsocialSecurityNumber() const;

    virtual double earnings() const = 0;
    virtual void print() const;
};
