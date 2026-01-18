#include <iostream>
using namespace std;
class clsPerson
{

    short _ID;
    string _Name;
    string _Phone;

public:
    clsPerson(short ID, string Name, string Phone)
    {

        _ID = ID;
        _Name = Name;
        _Phone = Phone;
    }

    void setID(short ID)
    {

        _ID = ID;
    }
    short getID()
    {
        return _ID;
    }
    void setName(string NAme)
    {

        _Name = NAme;
    }
    string getName()
    {
        return _Name;
    }
    void setPhone(string Phone)
    {

        _Phone = Phone;
    }
    string getPhone()
    {
        return _Phone;
    }
    virtual void PrintInfo()
    {

        cout << "------------------\n";
        cout << "ID    :" << _ID << endl;
        cout << "Name  :" << _Name << endl;
        cout << "Phone :" << _Phone << endl;
        cout << "----------------------\n";
    }
};

class clsEmployee : public clsPerson
{
    double _Salary;
    string _Department;

public:
    clsEmployee(short id, string Name, string Phone, string Departemnt, double Salary)
        : clsPerson(id, Name, Phone)
    {
        _Department = Departemnt;
        _Salary = Salary;
    }
    void SetSalary(double Salary)
    {
        _Salary = Salary;
    }
    double GetSalary()
    {

        return _Salary;
    }
    void SetDepartment(string Department)
    {
        _Department = Department;
    }
    string GetDepartment()
    {
        return _Department;
    }
    double CalculateAnnualSalary()
    {

        return _Salary * 12;
    }
    void PrintInfo()
    {

        cout << "------------------\n";
        cout << "ID        :" << getID() << endl;
        cout << "Name      :" << getName() << endl;
        cout << "Phone     :" << getPhone() << endl;
        cout << "Department: " << _Department << endl;
        cout << "Salary    :" << _Salary << endl;
        cout << "----------------------\n";
    }
};
class clsDoctor : public clsEmployee
{

    string _Specialization;
    short _YearsOfExperience;

public:
    clsDoctor(short ID, string Name, string Phone, string Departmetn, double Salary, string Specialization, short YearsOfExperience)
        : clsEmployee(ID, Name, Phone, Departmetn, Salary)
    {

        _Specialization = Specialization;
        _YearsOfExperience = YearsOfExperience;
    }
    void SetSpecialization(string Specialization)
    {

        _Specialization = Specialization;
    }
    string GetSpecialization()
    {

        return _Specialization;
    }
    void SetYearsOfExperience(short YearsOfExperience)
    {

        _YearsOfExperience = YearsOfExperience;
    }
    short GetYearsOfExperience()
    {
        return _YearsOfExperience;
    };
    int bonus()
    {

        return _YearsOfExperience * 50;
    }
    void PrintInfo()
    {

        cout << "\n----------- Doctor Information -----------------\n";
        cout << "ID                  :" << getID() << endl;
        cout << "Name                :" << getName() << endl;
        cout << "Phone               :" << getPhone() << endl;
        cout << "Department          : " << GetDepartment() << endl;
        cout << "Salary              :" << GetSalary() << endl;
        cout << "Specialization      :" << _Specialization << endl;
        cout << "Years Of Experience :" << _YearsOfExperience << endl;
        cout << "Bonus               :" << bonus() << endl;
        cout << "\n---------------------------------------------------\n";
    }
};

class clsPatient : public clsPerson
{
    string _Disease;
    string _AssignedDoctorName;

public:
    clsPatient(short id, string Name, string Phone, string Disease, string AssignedDoctorName)
        : clsPerson(id, Name, Phone)
    {
        _Disease = Disease;
        _AssignedDoctorName = AssignedDoctorName;
    }
    void SetDisease(string Disease)
    {

        _Disease = Disease;
    }
    string GetDisease()
    {
        return _Disease;
    }
    void SetAssignedDoctorName(string AssignedDoctorName)
    {

        _AssignedDoctorName = AssignedDoctorName;
    }
    string GetAssignedDoctorName()
    {
        return _AssignedDoctorName;
    }
    void PrintInfo()
    {
        cout << "\n------------- Patient Information ---------------\n";
        cout << "ID                    :" << getID() << endl;
        cout << "Name                  :" << getName() << endl;
        cout << "Phone                 :" << getPhone() << endl;
        cout << "Disease               :" << _Disease << endl;
        cout << "AssignedDoctorName    :" << _AssignedDoctorName << endl;
        cout << "\n---------------------------------------------------\n";
    }
};
int main()
{
    clsDoctor Doctor(101, "Dr.Ahmed", "777123456", "Surgery", 1500, "Orthopedic", 8);
    clsPatient Patient(202, "Hassan", "777777771", "Knee Pain", "Dr.Ahmed");
    clsPerson* person = &Doctor;
    clsPerson* person2 = &Patient;
    person->PrintInfo();
    person2->PrintInfo();
}