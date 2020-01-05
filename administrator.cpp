//This is the file administrator.cpp
//This is the implementation for the class administrator
//the interface for the class Administrator is in 
//the header file administrator.h

#include <string>
#include <iostream>
#include "administrator.h"

using namespace std;

namespace administrator {
    Administrator::Administrator() :Salariedemployee(), title("None"), AreaOfResponsibility("Nowhere"), supervisor("Nobody") {
        //deliberately empty
    }

    Administrator::Administrator(string the_name, string the_ssn, double the_weekly_salary,
        string the_title, string the_AreaOfResponsibility, string the_supervisor)
        : Salariedemployee(the_name, the_ssn, the_weekly_salary), title(the_title), AreaOfResponsibility(the_AreaOfResponsibility), supervisor(the_supervisor) {

    }
    void Administrator::set_supervisor(string name) {
        supervisor = name;
    }
    void Administrator::input(string new_title, string new_supervisor, string new_AreaOfResponsibility) {
        cout << "ÇëÄúÊäÈëÐÂµÄTitle, supervisor, AreaOfResponsibility:" << endl;
        cin >> new_title;
        cin >> new_supervisor;
        cin >> new_AreaOfResponsibility;
        title = new_title;
        supervisor = new_supervisor;
        AreaOfResponsibility = new_AreaOfResponsibility;
    }
    string Administrator::get_AreaOfResponsibility() const {
        return AreaOfResponsibility;
    }

    string Administrator::get_title() const {
        return title;
    }

    string Administrator::get_supervisor() const {
        return supervisor;
    }

    void Administrator::print() {
        cout << "There are the basic information of this administrator:" << endl;
        cout << "Name:" << get_name() << endl;
        cout << "SSN:" << get_ssn() << endl;
        cout << "Salary:" << get_salary() << endl;
        cout << "Title:" << get_title() << endl;
        cout << "Area of responsibility:" << get_AreaOfResponsibility() << endl;
        cout << "Supervisor:" << get_supervisor() << endl;
    }

    void Administrator::print_check() {
        set_net_pay(salary);
        cout << "\n________________________________________\n";
        cout << "\nPay to the order of " << get_name() << endl;
        cout << "The sum of " << get_net_pay << " Dollars\n";
        cout << "____________________________________________\n";
        cout << "Check Stub NOT NEGOTIABLE \n";
        cout << "Employee Number: " << get_ssn() << endl;
        cout << "Salaried Employee. Regular Pay: " << salary << endl;
        cout << "_____________________________________________\n";
        cout << "This employee is an administrator. Title:" << get_title() << endl;
        cout << "The administrator's area of responsibility:" << get_AreaOfResponsibility() << endl;
        cout << "The administrator's supervisor:" << get_supervisor() << endl;
    }
}