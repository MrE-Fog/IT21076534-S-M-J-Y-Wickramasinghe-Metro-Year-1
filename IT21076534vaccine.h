class Vaccine
{
 private:
  int vaccineID;
  char vaccineName[20];
  char patientName[20];
  int contactNo;
 public:
  Vaccine();
  Vaccine(int i, char n);
  void setVaccineDetails(int id, char vname[]);
  void displayVaccineDetails();
  void setPatientDetails(char pname[], int pcno);
  ~Vaccine();
};