#include <iostream>

using std::cout;
#include "commission.h"

CommissionEmployee::CommissionEmployee( const string &first,const string &last, const string &socialSecurityNumber,
                                       double grossWeeklySales, double percent )
:Employee( first, last, socialSecurityNumber)
{
    setGrossSales ( grossWeeklySales );
    setCommissionRate(percent );
}

double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}

double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}

void CommissionEmployee::setGrossSales( double sales )
{
    grossSales = sales < 0.0 ? 0.0 : sales;
}


void CommissionEmployee::setCommissionRate( double rate )
{
    commissionRate = ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0;
}

double CommissionEmployee::earnings() const
{
    return getCommissionRate() * getGrossSales () ;
}

void CommissionEmployee::print() const
{
    cout << "\ncommission employee: ";
    Employee::print();
}
