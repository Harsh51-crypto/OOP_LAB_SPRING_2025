#include<iostream>
using namespace std;
class Car{
string brand;
string model;
double rentalprice;
bool availabilty;


public:
Car(){
brand="unknown";
model="genric";
rentalprice=0.0;
availabilty=true;
}

Car(string brand,string model,double rentalprice,bool availabilty){
this->brand=brand;
this->model=model;
this->rentalprice=rentalprice;
this->availabilty=availabilty;	
}

void setrentalprice(double r){
rentalprice=r;	
}

void setavailabilty(bool a){
availabilty=a;	
}

double getrentalprice(){
return rentalprice;	
}

bool getavailability(){
return 	availabilty;
}

void processrental(){
if(availabilty==true){
cout<<"Car Rented successfully: "<<endl;
availabilty=false;	
	
}	
else{
cout<<"Car is not available: "<<endl;	
}
}

void applydiscount(int days){




if(days>5 && days<10){
rentalprice=rentalprice-((rentalprice*0.02));	
}
else if(days>10){
rentalprice=rentalprice-((rentalprice*0.1));	
}
}

};
int main(){
Car c1;
Car c2("Fortuner","SUV",52565.45,true);

if(c2.getavailability()==true){
int days;	
cout<<"Enter the days for rent: "<<endl;
cin>>days;	



cout<<"Car before discount: "<<endl;
cout<<c2.getrentalprice()<<endl;

c2.applydiscount(days);
cout<<"Car After discount: "<<endl;
cout<<c2.getrentalprice()<<endl;

c2.processrental();
}



return 0;
}

	
	
