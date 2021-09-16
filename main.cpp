#include <iostream>
#include "IT21076534vaccine.h"
using namespace std;

int main()
{
  Vaccine *v1, *v2, *v3;

  char pname[20];
  int cno;

  v1->setVaccineDetails(1, 'AstraZeneca');
  v2->setVaccineDetails(1, 'Pfizer'); 
  v3->setVaccineDetails(3, 'Sinopharm');
  
  cout<<"Input patient name for vaccine 1: ";
  cin>>pname;
  cout<<"Input patient contact number: ";
  cin>>cno;
  
  cout<<"Input patient name for vaccine 2: ";
  cin>>pname;
  cout<<"Input patient contact number: ";
  cin>>cno;

  cout<<"Input patient name for vaccine 3: ";
  cin>>pname;
  cout<<"Input patient contact number: ";
  cin>>cno;

  cout<<"Vaccine name= "<<vaccineName<<endl;
  cout<<"Patient name= "<<patientName<<endl;
  cout<<"Contact number= "<<contactNo<<endl;

  return 0;

  
}