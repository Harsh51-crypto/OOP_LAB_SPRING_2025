#include<iostream>
using namespace std;
class Car{
string brand;
string model;
double rentalprice;
bool availabilty;
double *reveune;

public:
Car(){
brand="unknown";
model="genric";
rentalprice=0.0;
availabilty=true;
reveune = new double();
}

Car(string brand,string model,double rentalprice,bool availabilty){
this->brand=brand;
this->model=model;
this->rentalprice=rentalprice;
this->availabilty=availabilty;	
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

Car(const Car &c){
reveune = new double();	
brand=c.brand;
model=c.model;
rentalprice=c.rentalprice;
availabilty=c.availabilty;

}

void display(){
cout<<"Car Brand: "<<brand<<endl;
cout<<"Car Model: "	<<model<<endl;
cout<<"Rental price: "<<rentalprice<<endl;
cout<<"Availabilty: "<<availabilty<<endl;
}

void setreveune(int days){
*reveune=rentalprice*days;	
}

 double getreveune(){
return *reveune;	
}


~Car(){
cout<<"Destructor is Called! "<<endl;	
}

};
int main(){
Car c1("Fortuner","SUV",59200.25,true);

if(c1.getavailabilty()==true){

int days;
cout<<"Enter the days for renting the car: "<<endl;
cin>>days;
c1.setreveune(days);

cout<<"Revune of renting a car: "<<c1.getreveune()<<endl;
c1.setavailabilty(false);
}
else{
	cout<<"Car is not available: "<<endl;
}



	
	
return 0;	
}
