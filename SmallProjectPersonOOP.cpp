#include <iostream>
using namespace std;
class clsPerson
{

private:
    string _firstname, _lastname, _Email, _phone;
    int _id;

public:
    clsPerson(int id, string first, string last, string email, string phone)
    {
        _id = id;
        _firstname = first;
        _lastname = last;
        _Email = email;
        _phone = phone;
    }

    int Id()
    {

        return _id;
    }
    void setFirsName(string first)
    {

        _firstname = first;
    }
    string FirstName()
    {

        return _firstname;
    }
    void setLastName(string Last)
    {

        _lastname = Last;
    }
    string LastName()
    {

        return _lastname;
    }
    string Fullname()
    {

        return _firstname + " " + _lastname;
    }
    void setEmail(string email)
    {

        _Email = email;
    }
    string Email()
    {

        return _Email;
    }
    void setPhone(string ph)
    {

        _phone = ph;
    }
    string phone()
    {

        return _phone;
    }
    void sendEmail(string subject, string Body)
    {

        cout << "The following message sent successfully to email: " << _Email << endl;
        cout << "subject :" << subject << endl;
        cout << "Body    :" << Body << endl;
    }
    void sendSMS(string about)
    {

        cout << "The following SMS sent successfully to Phone:" << _phone << endl;
        cout << about << endl;
    }
    virtual void print()
    {

        cout << "info :\n";
        cout << "-----------------\n";
        cout << "ID        :" << _id << endl;
        cout << "First Name:" << _firstname << endl;
        cout << "Last Name :" << _lastname << endl;
        cout << "Full Name :" << Fullname() << endl;
        cout << "Email     :" << _Email << endl;
        cout << "Phone     :" << _phone << endl;
        cout << "-----------------\n";
    }
};
class clsEmployee : public clsPerson
{
    float _salary;
    string _Department, _Title;

public:
    clsEmployee(int id, string Firstname, string Lastname, string email, string phone, string Tilte, string Department, float salary)
        : clsPerson(id, Firstname, Lastname, email, phone)
    {
        _salary = salary;
        _Department = Department;
        _Title = Tilte;
    }

    void setTitle(string tilte)
    {

        _Title = tilte;
    }
    string Title()
    {
        return _Title;
    }
    void setSalary(float salary)
    {
        _salary = salary;
    }
    float Salary()
    {

        return _salary;
    }
    void setDepartment(string Department)
    {
        _Department = Department;
    }
    string Department()
    {

        return _Department;
    }
    void print()
    {
        {

            cout << "info :\n";
            cout << "-----------------\n";
            cout << "ID        :" << Id() << endl;
            cout << "First Name:" << FirstName() << endl;
            cout << "Last Name :" << LastName() << endl;
            cout << "Full Name :" << Fullname() << endl;
            cout << "Email     :" << Email() << endl;
            cout << "Phone     :" << phone() << endl;
            cout << "Title     :" << _Title << endl;
            cout << "Salary    :" << _salary << endl;
            cout << "Department:" << _Department << endl;
            cout << "-----------------\n";
        }
    }
};
class clsProgrammer : public clsEmployee
{

    string _MainProgrammingLanguage;

public:
    clsProgrammer(int id, string Firstname, string Lastname, string email, string phone, string Tilte, string Department, float salary, string MainProgrammingLanguage)
        : clsEmployee(id, Firstname, Lastname, email, phone, Tilte, Department, salary)
    {

        _MainProgrammingLanguage = MainProgrammingLanguage;
    }
    void setMainProgrammingLanguage(string MainProgrammingLanguage)
    {

        _MainProgrammingLanguage = MainProgrammingLanguage;
    }
    string MainProgrammingLanguage()
    {

        return _MainProgrammingLanguage;
    }

    void print()
    {
        cout << "info :\n";
        cout << "----------------------------------------------------\n";
        cout << "ID                     :" << Id() << endl;
        cout << "First Name             :" << FirstName() << endl;
        cout << "Last Name              :" << LastName() << endl;
        cout << "Full Name              :" << Fullname() << endl;
        cout << "Email                  :" << Email() << endl;
        cout << "Phone                  :" << phone() << endl;
        cout << "Title                  :" << Title() << endl;
        cout << "Salary                 :" << Salary() << endl;
        cout << "Department             :" << Department() << endl;
        cout << "MainProgrammingLanguage:" << _MainProgrammingLanguage << endl;
        cout << "-----------------------------------------------------\n";
    }
};
int main()
{

    clsProgrammer pro1(10, "Loay", "Alarify", "loa@gmail", "777", "Eng", "IT", 2000, "C++");
    // pro1.print();
    clsEmployee emp1(12, "Nezar", "anwar", "wadad@gmail", "771846606", "CEO", "CY", 5000);
    // emp1.print();
    clsPerson* per = &pro1;
    per->print();
    clsPerson* per2 = &emp1;
    per2->print();
}