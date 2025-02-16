#include<iostream>
using namespace std;
class Car{
string brand;
string model;
double rentalprice;
bool availabilty;
double *reveune;
int registration_number;

public:
Car(){
brand="unknown";
model="genric";
rentalprice=0.0;
availabilty=true;
registration_number=0;
reveune = new double(0.0);
}

Car(string brand,string model,double rentalprice,bool availabilty,int registration_number ){
this->brand=brand;
this->model=model;
this->rentalprice=rentalprice;
this->availabilty=availabilty;
this->registration_number=registration_number;	
reveune = new double(0.0);
}


void setrentalprice(double rentalprice){
this->rentalprice=rentalprice;	
}

void setavailabilty(bool availabilty){
this->availabilty=availabilty;	
}

double getrentalprice(){
return rentalprice;	
}

bool getavailabilty(){
return availabilty;	
}


void display(){
cout<<"Car Brand: "<<brand<<endl;
cout<<"Car Model: "	<<model<<endl;
cout<<"Rental price: "<<rentalprice<<endl;
cout<<"Availabilty: "<<availabilty<<endl;
cout<<"Revune: "<<*reveune<<endl;
cout<<"Regirstration Number: "<<registration_number<<endl;

}

void setreveune(int days){
*reveune=rentalprice*days;
	
}

 double getreveune(){
return *reveune;	
}


void applydiscount(int days){

if(days>5 && days<10){
rentalprice=rentalprice-((rentalprice*0.02));	
}
else if(days>10){
rentalprice=rentalprice-((rentalprice*0.1));	
}
}


~Car(){
cout<<"Destructor is Called! "<<endl;
delete reveune;	
}

};
int main(){
Car c1("Fortuner","SUV",59200.25,true,9912);
Car c2("Honda","Civic",34500.24,true,9917);
cout<<"Car 1: "<<endl;
if(c1.getavailabilty()==true){

int days;
cout<<"Enter the days for renting the car: "<<endl;
cin>>days;
c1.applydiscount(days);
c1.setreveune(days);
c1.setavailabilty(false);
}
else{
	cout<<"Car is not available: "<<endl;
}

cout<<"Car 2: "<<endl;
if(c2.getavailabilty()==true){

int days;
cout<<"Enter the days for renting the car: "<<endl;
cin>>days;
c2.applydiscount(days);
c2.setreveune(days);
c2.setavailabilty(false);
}
else{
	cout<<"Car is not available: "<<endl;
}
cout<<"Car 1 Details: "<<endl;
c1.display();
cout<<endl;
cout<<"Car 2 Details: "<<endl;
c2.display();




	
	
return 0;	
}
