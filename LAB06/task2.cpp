#include<iostream>
using namespace std;
class Vehicle{
protected:	
string brand;
int speed;
public:
Vehicle(string brand,int speed):brand(brand),speed(speed){
}
void display(){
cout<<"Brand: "<<brand<<endl;
cout<<"Speed: "<<speed<<endl;	
}	
	
};
class Car:protected Vehicle{
protected:
int seats;
public:
Car(string brand,int speed,int seats):Vehicle(brand,speed),seats(seats){
}
void displaydetails(){
Vehicle::display();
cout<<"Seats: "<<seats<<endl;	
}	
};
class ElectricCar:protected Car{
int batterylife;
public:
ElectricCar(string brand,int speed,int seats,int batterylife):Car(brand,speed,seats){
}
void displayDetails(){
Car::displaydetails();
cout<<"Batter Life: "<<batterylife<<endl;	
}	
};
int main(){
ElectricCar e("Tesla",450,4,6);
e.displayDetails();	
return 0;	
}
