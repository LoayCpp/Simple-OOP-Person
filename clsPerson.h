#pragma once
#include<iostream>
using namespace std;


class clsPerson
{

    class clsPersonInfo {





    };
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
