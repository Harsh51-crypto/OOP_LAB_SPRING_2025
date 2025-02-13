#include<iostream>
using namespace std;
class FitnessTracker{
string username;
int dailystepsgoal;
int stepstaken;
float caloriesburned;
float caloriesburnedgoal;

public:
FitnessTracker(string username){
this->username=username;	
	
}	

void setsteps(int stepstaken,int dailystepsgoal){
	this->stepstaken=stepstaken;
	this->dailystepsgoal=dailystepsgoal;
	
}

void calcluatecalories(){

float perstep=0.5;
caloriesburned=perstep*stepstaken;
caloriesburnedgoal=dailystepsgoal*perstep;
cout<<"Expected Calories burned: "<<caloriesburnedgoal<<endl;
cout<<"Actual Calories Burned: "<<caloriesburned<<endl;	




}

void remainder(){
float perstep=0.5;	

if(dailystepsgoal>stepstaken){
int remain=dailystepsgoal-stepstaken;
caloriesburned=remain*perstep;
cout<<"You still need to burn "<<caloriesburned<<" calories For completing your daily goal: "<<endl;
	
}
else{
cout<<"you have achieved your goal: "<<endl;	
}
	
}

void display(){
cout<<"Name: "<<username<<endl;
cout<<"Daily Steps Goal: "<<dailystepsgoal<<endl;
cout<<"Steps taken: "<<stepstaken<<endl;
cout<<"Expected Calories burned: "<<caloriesburnedgoal<<endl;
cout<<"Actual Calories Burned: "<<caloriesburned<<endl;	
}



	
};
int main(){
FitnessTracker f("Laiba");


int choice;
do{
cout<<"1: LOG STEPS: "<<endl;
cout<<"2: DISPLAY CALORIES: "<<endl;
cout<<"3: DISPLAY PROGESS: "<<endl;
cout<<"4: EXIT: "<<endl;
cout<<"Enter your choice! "<<endl;
cin>>choice;

switch(choice){
case 1:
int stepstaken,dailystepsgoal;
cout<<"Enter the daily steps Goal: "<<endl;
cin>>dailystepsgoal;

cout<<"Enter the Actual steps you have taken :"<<endl;
cin>>stepstaken;

f.setsteps(stepstaken,dailystepsgoal);
break;

case 2:
f.calcluatecalories();	
break;

case 3:
f.display();
f.remainder();
break;

case 4:
cout<<"Exiting the programe: "<<endl;
return 0;
break;
	
}

	
}
while(choice!=4);

	
return 0;	
}
