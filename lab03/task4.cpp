#include<iostream>
using namespace std;
class Car{
string model;
string brand;
float fuelcapicity;
float currentfuellevel;	
float Fuelconusmption; // per km//


public:


Car(){
brand="BMW";
model="X5";
fuelcapicity=83.2;
currentfuellevel=43.2;
Fuelconusmption=0.2;
}

void ReducingFuelLevel(float distance){
float NeededFuel=distance*Fuelconusmption;
if(NeededFuel>currentfuellevel){
cout<<"No enough fuel For travlling such distance: "<<endl;	
}
else{
currentfuellevel-=NeededFuel;	
}
}



void refueltank(float fuel){
float checkfuel=currentfuellevel+fuel;	
if((fuel>0 && fuel<fuelcapicity)  && (currentfuellevel<fuelcapicity) && (checkfuel<=fuelcapicity)){

currentfuellevel+=fuel;	
} 	
else{
cout<<"Sorry Fuel has rechaed out of its capicity! OR  invalid input! "<<endl; 	
}
}
void notify(){
if(currentfuellevel<20){
cout<<"Alert! Fuel is Low: "<<endl;	
}		
}

void FuelStatus(){
cout<<"The Current Fuel is: "<<currentfuellevel<<endl;	
}
};

int main(){
Car c;
int choice;
float fuel;
float distance;
do{
cout<<"1: Drive"<<endl;
cout<<"2: Add Fuel"<<endl;
cout<<"3: Check Fuel"<<endl;
cout<<"4: Exit"<<endl<<endl;
cout<<"Enter the choice: "<<endl;
cin>>choice;

switch(choice){
case 1:
cout<<"Distance of point Where you will Drive: "<<endl;
cin>>distance;
c.ReducingFuelLevel(distance);
c.notify();
break;

case 2:
cout<<"How much Fuel! "<<endl;
cin>>fuel;
c.refueltank(fuel);
break;

case 3:
cout<<"Displaying Fuel! "<<endl;
c.FuelStatus();
c.notify();
break;

case 4:
cout<<"EXITING----"<<endl;
return 0;
break;



}

	
}	
while(choice!=4);
return 0;	
}
