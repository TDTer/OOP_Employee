#include <iostream>

using std::cout;

#include "hourly.h"


HourlyEmployee::HourlyEmployee(const string &first,const string &last, const string &socialSecurityNumber,double hourlyWage, double hoursWorked )
:Employee( first, last, socialSecurityNumber )
{
    setWage( hourlyWage ),
    setHours( hoursWorked );
}


void HourlyEmployee::setWage( double wageAmount )
{
    wage = wageAmount < 0.0 ? 0.0 : wageAmount;
}

void HourlyEmployee::setHours( double hoursWorked)
{
    hours = ( hoursWorked >= 0.0 && hoursWorked <= 168.0 ) ? hoursWorked : 0.0;
}


double HourlyEmployee::getHours() const
{
    return hours;
}

double HourlyEmployee::getWage() const
{
    return wage;
}


double HourlyEmployee::earnings() const
{
    if ( hours <= 40 ) return wage * hours;
    else
        return 40 * wage + ( hours - 40 ) * wage * 1.5;

}

void HourlyEmployee::print() const
{
    cout << "\nhourly employee: ";
    Employee::print();
}

