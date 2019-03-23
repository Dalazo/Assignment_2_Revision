
#include "person.h"
#include "person.cpp"
#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;


 void readData(vector<Person> &myVect);
 void writeData(vector<Person> &myVect);

int main()
{

vector<Person> myVect;

readData(myVect);


writeData(myVect);


return 0;

}

void readData(vector<Person> &myVect)
{

fstream myfile;



myfile.open("data.txt");


if (!myfile.is_open())
{

cout << "File not found " << endl;
 return;
}


while (!myfile.eof())
{

string firstname;
string lastname;

float hours;
float payrate;


myfile >> firstname >> lastname >> hours >> payrate;




myVect.emplace_back(Person(firstname,lastname,payrate,hours));






}




myfile.close();

}



void writeData(vector<Person> &myVect){


ofstream outfile ("newData.txt");


for (unsigned int i = 0; i < myVect.size(); i++)
{

outfile << myVect.at(i).fullName()<< " ";
outfile << myVect.at(i).totalPay() << endl;

}



outfile.close();

}
