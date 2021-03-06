// Driver for Employee hierarchy.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;
#include <iomanip>
using std::setprecision;
#include <vector>
using std::vector;
#include <typeinfo>
#include "employee.h" // Employee base class
#include "salaried.h" // SalariedEmployee class
#include "commission.h" // CommissionEmployee class
#include "baseplus.h" // BasePlusCommissionEmployee class
#include "hourly.h" // HourlyEmployee class
int main()
{
    // set floating-point output formatting
    cout << fixed << setprecision( 2 );

    // create vector employees
    vector < Employee * > employees( 4 );

    // initialize vector with Employees
    employees[ 0 ] = new SalariedEmployee( "John", "Smith","111-11-1111", 800.00 );
    employees[ 1 ] = new CommissionEmployee( "Sue", "Jones","222-22-2222", 10000, .06 );
    employees[ 2 ] = new BasePlusCommissionEmployee( "Bob","Lewis", "333-33-3333",  5000, .04, 300 );
    employees[ 3 ] = new HourlyEmployee( "Karen", "Price","444-44-4444", 16.75, 40 );

    // generically process each element in vector employees
    for ( int i = 0; i < employees.size(); i++ ) {
        // output employee information
        employees[ i ]->print();
        // downcast pointer
        BasePlusCommissionEmployee *commissionPtr = dynamic_cast < BasePlusCommissionEmployee * >( employees[ i ] );

        // determine whether element points to base-salaried
        // commission worker
        if ( commissionPtr != 0 ) {
            cout << "old base salary: $"
                << commissionPtr->getBaseSalary() << endl;
            commissionPtr->setBaseSalary(1.10 * commissionPtr->getBaseSalary() );
            cout << "new base salary with 10% increase is: $"
                << commissionPtr->getBaseSalary() << endl;
        } // end if
        cout << "earned $" << employees[ i ]->earnings() << endl;
    } // end for

    // release memory held by vector employees
    for ( int j = 0; j < employees.size(); j++ ) {
        // output class name
        cout << "\ndeleting object of "
            << typeid(*employees[ j ]).name();
        delete employees[ j ];
    } // end for

    cout << endl;
    return 0;
} // end main
