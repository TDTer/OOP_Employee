#ifndef SALARIED_H
#define SALARIED_H

#include "employee.h"
class SalariedEmployee : public Employee {
private:
    double weeklySalary;
public:

    SalariedEmployee( const string&, const string&,const string&, double = 0.0 );

    void setWeeklySalary( double );
    double getWeeklySalary() const;

    virtual double earnings() const;
    virtual void print() const;

};
#endif
