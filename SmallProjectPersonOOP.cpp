#include <iostream>
using namespace std;
class clsPerson
{

private:
    string _firstname, _lastname, _Email, _phone;
    int _id;
public:
    static int counter;
    clsPerson(string first, string last, string email, string phone)
    {
        counter++;

        _id = counter;
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
        cout << "-------------------------------------------------------------------------\n";
        cout << "The following message sent successfully to email: " << _Email << endl;
        cout << "subject :" << subject << endl;
        cout << "Body    :" << Body << endl;
        cout << "-------------------------------------------------------------------------\n";
    }
    void sendSMS(string about)
    {
        cout << "-------------------------------------------------------------------------\n";
        cout << "The following SMS sent successfully to Phone:" << _phone << endl;
        cout << about << endl;
        cout << "-------------------------------------------------------------------------\n";
    }
    void print()
    {

        cout << "info :\n";
        cout << "----------------------------\n";
        cout << "ID        :" << _id << endl;
        cout << "First Name:" << _firstname << endl;
        cout << "Last Name :" << _lastname << endl;
        cout << "Full Name :" << Fullname() << endl;
        cout << "Email     :" << _Email << endl;
        cout << "Phone     :" << _phone << endl;
        cout << "----------------------------\n";
    }
};
int clsPerson::counter = 0;
int main()
{
    clsPerson person1("Loay", "Alarify", "loayalarify777184509@gmail.com", "+967733693579");
    person1.print();
    person1.sendEmail("Hi", "How Are You?");
    person1.sendSMS("Hi Ahmed");
   cout<< person1.Id()<<endl;
    clsPerson person2("nezar", "Alarify", "nezar@gmail.com", "+96771823579");
    person2.print();
   cout<< person2.Id()<<endl;
   
}