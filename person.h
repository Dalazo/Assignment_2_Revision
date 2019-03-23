//begin person.h
#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
class Person
{
private:
    string lastName;
    string firstName;
    float  payRate;
    float  hoursWorked;
public:
    Person(std::string fName, std::string lName, float rate, float  
hours);
    void setLastName(std::string lName);
    string getLastName();
    void setFirstName(std::string fName);
    string getFirstName();
    void setPayRate(float rate);
    float getPayRate();
    void setHoursWorked(float hours);
    float getHoursWorked();
    float totalPay();
    string fullName();
};
#endif // end person.h
