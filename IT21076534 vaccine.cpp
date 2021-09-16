#include<iostream>
#include<cstring>
#include "IT21076534vaccine.h"
using namespace std;

Vaccine::Vaccine()
{
  vaccineID=0;
}
Vaccine::~Vaccine()
{
  cout<<"Destructor"<<endl;
}
void Vaccine::setVaccineDetails(int id, char vname[])
{
  id=vaccineID;
  strcpy(vaccineName,vname);
}
void Vaccine::displayVaccineDetails()
{
  cout<<"Vaccine ID = "<<vaccineID<<endl;
}
void Vaccine::setPatientDetails(char pname[], int pcno)
{
  contactNo=pcno;
  strcpy(patientName,pname);
}
