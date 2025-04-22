#include<iostream>
using namespace std;
class Patient{
   protected:
   string name;
   const int id;
   public:
   Patient(string name,int id):name(name),id(id){}

   virtual const void DisplayTreatment()=0;
virtual double CalculateCost()=0;

};
class InPatient:public Patient{
double fee;
public:
InPatient(string name,int id):Patient(name,id){
   fee=2000;
}


double CalculateCost(){
   return fee;

}

const void DisplayTreatment(){
cout<<"----------Patient Details----------- "<<endl;
cout<<"Name: "<<name<<endl;
cout<<"ID: "<<id<<endl;

cout<<"Treatment of InPatient: "<<endl;

}

};
class OutPatient:public Patient{
   double fee;
   public:
   OutPatient(string name,int id):Patient(name,id){
      fee=2000;
   }

double CalculateCost(){
   return fee+=1000; // extra charges of OutPatient//
}

const void DisplayTreatment(){
   cout<<"----------Patient Details----------- "<<endl;
cout<<"Name: "<<name<<endl;
cout<<"ID: "<<id<<endl;

cout<<"Treatment of OutPatient: "<<endl;
   

}
};

int main(){
   Patient *p;
   p=new InPatient("Akshay",100);
   double fee=p->CalculateCost();
   p->DisplayTreatment();
   cout<<"Fee of InPatient: "<<fee<<endl;
   

   cout<<endl<<endl;

   p=new OutPatient("Sandesh",101);
   fee=p->CalculateCost();
   p->DisplayTreatment();
   cout<<"Fee of OutPatient: "<<fee<<endl;


   return 0;
}
