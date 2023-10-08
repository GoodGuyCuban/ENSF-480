/*
* File Name: Company_improved.cpp
* Assignment: Lab 1 Exercise C
* Completed by: Marcos Perez, Cris Canayon
* Submission Date: Sept 18, 2023
*/

#include <string>
#include <vector>
using namespace std;
class Company
{
    private:
        string companyName;
        Address companyAddress;
        vector <Employee> companyEmployees;
        Date dateEstablished; 
            
};

class Customers
{
    private:
        string customerName;
        Address customerAddress;
        string customerPhone;
};

class Employee
{
    private:
        string employeeName;
        Address employeeAddress;
        Date employeeDateOfBirth;
        string employeeState;

};

class Address
{
    private:
        string street;
        string city;
        string state;
        string zip;
};

class Date
{
    private:
        int month;
        int day;
        int year;
};
