#ifndef BASEPLUS_H
#define BASEPLUS_H

#include "commission.h"
class BasePlusCommissionEmployee : public CommissionEmployee {
private:
    double baseSalary;

public:

    BasePlusCommissionEmployee(const string &, const string &,const string &, double = 0.0, double = 0.0, double = 0.0 );

    void setBaseSalary( double );
    double getBaseSalary() const;

    virtual double earnings() const;
    virtual void print() const;

};
#endif

