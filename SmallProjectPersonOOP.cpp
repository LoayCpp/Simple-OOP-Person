#include <iostream>
#include "./MyClasses/clsEmployee.h"
#include "./MyClasses/clsCommunication.h"
#include "./MyClasses/clsPatient.h"
#include "./MyClasses/clsDoctor.h"
#include "./MyClasses/clsPerson.h"
using namespace std;



int main()
{

    clsEmployee ArrayEmp[]{

        clsEmployee(102,"Loay","3332","Eng",13000),
         clsEmployee(102,"nezar","777","CEO",12000),
           clsEmployee(102,"yazan","1212","IT",4300)


    };
    for (clsEmployee &emp :ArrayEmp) {
        emp.PrintInfo();



    }
   

    /*clsEmployee emp(102, "name","3332","eng",2000);

    clsDoctor Doctor(101, "Dr.Ahmed", "777123456", "Surgery", 1500, "Orthopedic", 8);
    clsPatient Patient(202, "Hassan", "777777771", "Knee Pain", "Dr.Ahmed");
    clsPerson* person = &Doctor;
    clsPerson* person2 = &Patient;
    person->PrintInfo();
    Doctor.PrintReport();
    person2->PrintInfo();*/
}