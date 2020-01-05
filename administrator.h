#pragma once
//
// Created by Franz on 2019/12/23.
//This is the file administrator.h
//

#ifndef CPP_HOMEWORK_ADMINISTRATOR_H
#define CPP_HOMEWORK_ADMINISTRATOR_H

#include <cstring>
#include "SalariedEmployee.h"

using namespace std;
using namespace employeessavitch;
namespace administrator
{
    class Administrator : public Salariedemployee
    {
    private:
        string title;
        string AreaOfResponsibility;
        string supervisor;
    public:
        Administrator();
        Administrator(string the_name, string the_ssn, double the_weekly_salary,
            string the_title, string the_AreaOfResponsibility, string the_supervisor);
        void set_supervisor(string name);
        void input(string new_title, string new_supervisor, string new_AreaOfResponsibility);
        void print();
        void print_check();
        string get_supervisor() const;
        string get_AreaOfResponsibility() const;
        string get_title() const;
    protected:
        double annual_salary;
    };
}
#endif //CPP_HOMEWORK_ADMINISTRATOR_H
