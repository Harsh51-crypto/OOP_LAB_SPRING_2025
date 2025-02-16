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


~Car(){
cout<<"Destructor is Called! "<<endl;	
}

};
int main(){
Car c1("Fortuner","SUV",59200.25,true);
Car c2(c1);

c1.setrentalprice(32980.25);
c1.setavailabilty(false);

cout<<"Before Updation: "<<endl;
c2.display();

cout<<endl;
cout<<"After Updation: "<<endl;
c1.display();






	
	
return 0;	
}
