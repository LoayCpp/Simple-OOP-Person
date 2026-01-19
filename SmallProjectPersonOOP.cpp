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
    virtual void PrintInfo() = 0;
    
   
};
class clsCommunication {

public:
    virtual void SendNotification() = 0;
    virtual void PrintReport()=0;
    

};
class clsEmployee : public clsPerson,clsCommunication
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
        cout << "Specialization      :" << JobDetails. _Specialization << endl;
        cout << "Years Of Experience :" << JobDetails._YearsOfExperience << endl;
        cout << "Bonus               :" << bonus() << endl;
        cout << "\n---------------------------------------------------\n";
    }
};

class clsPatient : public clsPerson
{
    
    struct stMedicalRecord {


    string _Disease;
    string _AssignedDoctorName;

    };
    stMedicalRecord MedicalRecord;

public:
    clsPatient(short id, string Name, string Phone, string Disease, string AssignedDoctorName)
        : clsPerson(id, Name, Phone)
    {
        MedicalRecord._Disease = Disease;
        MedicalRecord._AssignedDoctorName = AssignedDoctorName;
    }
    void SetDisease(string Disease)
    {

        MedicalRecord._Disease = Disease;
    }
    string GetDisease()
    {
        return MedicalRecord._Disease;
    }
    void SetAssignedDoctorName(string AssignedDoctorName)
    {

        MedicalRecord._AssignedDoctorName = AssignedDoctorName;
    }
    string GetAssignedDoctorName()
    {
        return MedicalRecord._AssignedDoctorName;
    }
    void PrintInfo()
    {
        cout << "\n------------- Patient Information ---------------\n";
        cout << "ID                    :" << getID() << endl;
        cout << "Name                  :" << getName() << endl;
        cout << "Phone                 :" << getPhone() << endl;
        cout << "Disease               :" << MedicalRecord._Disease << endl;
        cout << "AssignedDoctorName    :" << MedicalRecord._AssignedDoctorName << endl;
        cout << "\n---------------------------------------------------\n";
    }
};
int main()
{
    clsEmployee emp(102, "name","3332","eng",2000);

    clsDoctor Doctor(101, "Dr.Ahmed", "777123456", "Surgery", 1500, "Orthopedic", 8);
    clsPatient Patient(202, "Hassan", "777777771", "Knee Pain", "Dr.Ahmed");
    clsPerson* person = &Doctor;
    clsPerson* person2 = &Patient;
    person->PrintInfo();
    Doctor.PrintReport();
    person2->PrintInfo();
}