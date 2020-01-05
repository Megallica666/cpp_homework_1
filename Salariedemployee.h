#pragma once
#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <string>
#include "employee.h"

using namespace std;

namespace employeessavitch {

    class Salariedemployee :public Employee
    {
    protected:
        double salary;//weekly
    public:
        Salariedemployee();
        Salariedemployee(string the_name, string the_ssn, double the_weekly_salary);
        double get_salary() const;
        void set_salary(double new_salary);
        void print_check();
    };

}
//我是共产主义接班人，继承着革命先辈的光荣传统
#endif 