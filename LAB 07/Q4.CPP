#include "iostream"
using namespace std;
class Person
{
protected:
   string name;
   int age;
   long long int contact_no;
   string address;

public:
   Person(string name, int age, long long int contact_no, string address) : name(name), age(age), contact_no(contact_no), address(address) {}
   virtual void displayinfo() const
   {
      cout << "Name: " << name << endl;
      cout << "Age: " << age << endl;
      cout << "Contact No: " << contact_no << endl;
      cout << "Address: " << address << endl;
   }
   virtual void updateinfo()
   {
   }
};
class Patient : public Person
{
   const int patientid;
   string medicalhistory;
   bool doctorassigned;

public:
   Patient(string name, int age, long long int contact_no, string address, int id, string history, bool assigned) : Person(name, age, contact_no, address), patientid(id), medicalhistory(history), doctorassigned(assigned) {}

   void displayinfo() const
   {
      Person::displayinfo();
      cout << "Patient ID: " << patientid << endl;
      cout << "Medical History: " << medicalhistory << endl;
      if (doctorassigned == true)
         cout << " Doctor Assinged: " << endl;
      else
         cout << "Doctor not Assigned: " << endl;
   }
};
class Doctor : public Person
{
   string specilization;
   double consultaionfee;
   Patient *patientlist[10];
   int patientcount;

public:
   Doctor(string name, int age, long long int contact_no, string address, string specilization, double fee) : Person(name, age, contact_no, address), consultaionfee(fee), specilization(specilization)
   {
      patientcount = 0;
   }
   void addpatient(Patient *p)
   {
      if (patientcount < 10)
      {
         patientlist[patientcount++] = p;
      }
      else
      {
         cout << "Sorry Not Enough Space For More Than 10 Patients: " << endl;
      }
   }
   void displayinfo() const
   {
      Person::displayinfo();
      cout << "Specilization: " << specilization << endl;
      cout << "Consultaion Fee: " << consultaionfee << endl;
      cout << " Total Patinet Assinged: " << patientcount << endl;
      cout << "----------Patient Details-----------" << endl;
      for (int i = 0; i < patientcount; i++)
      {
         patientlist[i]->displayinfo();
      }
   }

   void setspecilization(string s)
   {
      specilization = s;
   }

   void setfee(double fee)
   {
      consultaionfee = fee;
   }
};
class Nurse : public Person
{
   string assingedWard;  // Room Number In Hospital //
   string shifittimings; // from x time to y time //
public:
   Nurse(string name, int age, long long int contact_no, string address, string assignedward, string timing) : Person(name, age, contact_no, address), assingedWard(assignedward), shifittimings(timing) {}

   void displayinfo() const
   {
      cout << "Name: " << name << endl;
      cout << "Assinged Ward: " << assingedWard << endl;
      cout << "Shifit-Timings: " << shifittimings << endl;
   }

   void setward(const string ward)
   {
      assingedWard = ward;
   }

   void settiming(const string timing)
   {
      shifittimings = timing;
   }
};
class Administrator : public Person
{
   string department;
   double salary;
   Doctor *d;
   Nurse *n;

public:
   Administrator(string name, int age, long long int contatc_no, string address, string department, double salary) : Person(name, age, contact_no, address), department(department), salary(salary)
   {
      d = new Doctor("Harsh", 30, 123456, "Forum-Mall", "Cardiologist", 4000);
      n = new Nurse("Alyeesha", 23, 5619344, "Korangi", "D23", "9.00 AM TO 12 AM");
   }

   void updateinfo()
   {
      string newspecilization;
      cout << "Enter The New Speclization: " << endl;
      cin >> newspecilization;

      double newfee;
      cout << "Enter The  NEW Consultaion Fee: " << endl;
      cin >> newfee;
      d->setspecilization(newspecilization);
      d->setfee(newfee);

      string assingedward;
      cout << "Enter The Ward For Assinging Nurse: " << endl;
      cin >> assingedward;

      string timing;
      cout << "Enter The Timing For Nurse In ward: " << endl;
      cin >> timing; // from  x to y//

      n->setward(assingedward);
      n->settiming(timing);
   }

   void displayinfo() const override
   {
      Person::displayinfo();
      cout << "Department: " << department << endl;
      cout << "Salary: $" << salary << endl;
      cout << "\n--- Doctor Info ---" << endl;
      d->displayinfo();
      cout << "\n--- Nurse Info ---" << endl;
      n->displayinfo();
   }

   ~Administrator()
   {
      delete d;
      delete n;
   }
};

int main()
{
   Person *p;
   Administrator admin("Sarah", 40, 1122334455, "Downtown", "HR", 80000);
   p = &admin;
   p->displayinfo();

   cout << "\nUpdating Information...\n";
   p->updateinfo();

   cout << "\nUpdated Info:\n";
   p->displayinfo();

   return 0;
}
