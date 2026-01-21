#pragma once
#include<iostream>
#include "clsEmployee.h"
using namespace std;

class clsDoctor : public clsEmployee
{
private:
    struct stJobDetails {

        string _Specialization;
        short _YearsOfExperience;


    };

    stJobDetails JobDetails;

public:
    clsDoctor(short ID, string Name, string Phone, string Departmetn, double Salary, string Specialization, short YearsOfExperience)
        : clsEmployee(ID, Name, Phone, Departmetn, Salary)
    {

        JobDetails._Specialization = Specialization;
        JobDetails._YearsOfExperience = YearsOfExperience;
    }
    void SetSpecialization(string Specialization)
    {

        JobDetails._Specialization = Specialization;
    }
    string GetSpecialization()
    {

        return JobDetails._Specialization;
    }
    void SetYearsOfExperience(short YearsOfExperience)
    {

        JobDetails._YearsOfExperience = YearsOfExperience;
    }
    short GetYearsOfExperience()
    {
        return JobDetails._YearsOfExperience;
    };
    int bonus()
    {

        return JobDetails._YearsOfExperience * 50;
    }

    void PrintInfo()
    {

        cout << "\n----------- Doctor Information -----------------\n";
        cout << "ID                  :" << getID() << endl;
        cout << "Name                :" << getName() << endl;
        cout << "Phone               :" << getPhone() << endl;
        cout << "Department          : " << GetDepartment() << endl;
        cout << "Salary              :" << GetSalary() << endl;
        cout << "Specialization      :" << JobDetails._Specialization << endl;
        cout << "Years Of Experience :" << JobDetails._YearsOfExperience << endl;
        cout << "Bonus               :" << bonus() << endl;
        cout << "\n---------------------------------------------------\n";
    }
};
