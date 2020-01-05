//This is the file salariedemployee.cpp
//This is the implementation for the class SalariedEmployee.
//The interface for the class SalariedEmployee is in 
//the header file salariedemployee.h
#include <iostream>
#include <string>
#include "salariedemployee.h"

using namespace std;

namespace employeessavitch {
    Salariedemployee::Salariedemployee() :Employee(), salary(0) {
        //deliberately empty
    }

    Salariedemployee::Salariedemployee(string the_name, string the_number, double the_weekly_salary) : Employee(the_name, the_number), salary(the_weekly_salary) {
        //deliberately em[ty
    }

    double Salariedemployee::get_salary() const {
        return salary;
    }

    void Salariedemployee::set_salary(double new_salary) {
        salary = new_salary;
    }

    void Salariedemployee::print_check() {
        set_net_pay(salary);
        cout << "\n________________________________________\n";
        cout << "\nPay to the order of " << get_name() << endl;
        cout << "The sum of " << get_net_pay << " Dollars\n";
        cout << "____________________________________________\n";
        cout << "Check Stub NOT NEGOTIABLE \n";
        cout << "Employee Number: " << get_ssn() << endl;
        cout << "Salaried Employee. Regular Pay: " << salary << endl;
        cout << "_____________________________________________\n";

    }

}//employeessavitch