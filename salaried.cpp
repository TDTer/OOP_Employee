#include <iostream>

using std::cout;

#include "salaried.h"

SalariedEmployee::SalariedEmployee(const string &first,const string &last, const string &socialSecurityNumber, double salary )
:Employee( first, last, socialSecurityNumber )
{
    setWeeklySalary( salary );
}

void SalariedEmployee::setWeeklySalary( double salary )
{
    weeklySalary = salary < 0.0 ? 0.0 : salary;
}

double SalariedEmployee::earnings() const
{
    return getWeeklySalary () ;
}

double SalariedEmployee::getWeeklySalary() const
{
    return weeklySalary;
}

void SalariedEmployee::print() const
{
    cout << "\nsalaried employee: ";
    Employee::print();
}
