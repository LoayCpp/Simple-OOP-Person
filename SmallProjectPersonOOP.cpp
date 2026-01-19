#include <iostream>
#include "clsPerson.h"
#include "clsCommunication.h"
#include "clsEmployee.h"
#include "clsPatient.h"
#include "clsDoctor.h"
using namespace std;



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