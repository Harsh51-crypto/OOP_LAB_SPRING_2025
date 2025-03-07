#include<iostream>
using namespace std;
class Device{
protected:
int deviceId;
bool status;
public:
Device(int deviceId,bool status):deviceId(deviceId),status(status){
}

void setid(int id){
if(id>0){
deviceId=id;	
}	
}
void setstatus(bool s){
status=s;	
}

int getid(){ return deviceId;
}

bool getstatus(){
	 return status;
}
void display(){
cout<<"Device ID: "<<deviceId<<endl;
if(status==true){
cout<<"Status: Available "<<endl;	
}	
else{
cout<<"Status: Not Available "<<endl;	
}
}	
};
class Smartphone:public Device{
protected:	
float screensize;
public:
Smartphone(int id,bool status,float screen):Device(id,status),screensize(screen){
}	

void setscreensize(float size){
screensize=size;	
}

float getscreensize(){
return screensize;	
}
void Display(){

cout<<"Screen Size: "<<screensize<<endl;	
}
};
class SmartWatch:public Device{
protected:	
bool heartratemonitor;
public:
SmartWatch(int id,bool status,bool heartrate):Device(id,status),heartratemonitor(heartrate){
}

void setheartratemonitor(bool heartrate){
heartratemonitor=heartrate;	
}	
bool getheartrate(){
return heartratemonitor;	
}

void DisplayDetails(){
Device::display();
cout<<"Heart Rate Monitor: "<<heartratemonitor<<endl;	
}	
};
class Smartwearable:public SmartWatch,public Smartphone{
int stepcounter;
public:
Smartwearable(int id,bool status,bool heartrate,float screensize,int step=0):SmartWatch(id,status,heartrate),Smartphone(id,status,screensize),stepcounter(step){
}

void setstep(int steps){
stepcounter+=steps;	
}	
int getsteps(){
return stepcounter;	
}

void DIsplay(){
SmartWatch::DisplayDetails();
Smartphone::Display();
cout<<"Steps: "<<stepcounter;	
}
};
int main(){
Smartwearable s(100,true,true,4.5,100);
s.DIsplay();	
return 0;	
}
