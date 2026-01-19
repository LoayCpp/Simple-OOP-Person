#pragma once
#include<iostream>
#include"clsPerson.h"
#include"clsCommunication.h"
using namespace std;
class clsEmployee : public clsPerson, clsCommunication
{
    struct stEmploymentData {

        double _Salary;
        string _Department;


    };
    stEmploymentData EmploymentData;
public:
    clsEmployee(short id, string Name, string Phone, string Departemnt, double Salary)
        : clsPerson(id, Name, Phone)
    {
        EmploymentData._Department = Departemnt;
        EmploymentData._Salary = Salary;
    }
    void SetSalary(double Salary)
    {
        EmploymentData._Salary = Salary;
    }
    double GetSalary()
    {

        return EmploymentData._Salary;
    }
    void SetDepartment(string Department)
    {
        EmploymentData._Department = Department;
    }
    string GetDepartment()
    {
        return EmploymentData._Department;
    }
    double CalculateAnnualSalary()
    {

        return EmploymentData._Salary * 12;
    }
    void SendNotification() {


        cout << "send Notification to " << getName() << " to phone:" << getPhone() << endl;
    };
    void PrintReport() {


        cout << "This Report to " << getName() << " to phone:" << getPhone() << endl;
    };
    void PrintInfo()
    {

        cout << "------------------\n";
        cout << "ID        :" << getID() << endl;
        cout << "Name      :" << getName() << endl;
        cout << "Phone     :" << getPhone() << endl;
        cout << "Department: " << EmploymentData._Department << endl;
        cout << "Salary    :" << EmploymentData._Salary << endl;
        cout << "----------------------\n";
    }

};