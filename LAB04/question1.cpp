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


void setrentalprice(double r){
rentalprice=r;	
}

void setavailabilty(bool a){
availabilty=a;	
}


void processrental(){
if(availabilty==true){
cout<<"Car is available: "<<endl;
availabilty=false;	
	
}	
else{
cout<<"Car is not available: "<<endl;	
}
}


};
int main(){
Car c1;
c1.setrentalprice(25000);
c1.setavailabilty(true);
c1.processrental();





	
	
	
return 0;	
}
