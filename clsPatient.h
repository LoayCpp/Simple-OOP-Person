#include<iostream>
#include"clsPerson.h"
using namespace std;

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