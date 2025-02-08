#include<iostream>
using namespace std;
struct Employee{
string name;
int hoursworked;
int hourlyratre;
int salary;
	
};


void input(Employee *e,int size){
cout<<"Enter the details of Employee: "<<endl;
for(int i=0;i<size;++i){

cout<<"Enter the Employee: "<<i+1<<" NAME "<<endl;
cin>>e[i].name;

cout<<"Enter the Employee: "<<i+1<<" Worked Hour: "<<endl;
cin>>e[i].hoursworked;

cout<<"Enter the Employee: "<<i+1<<" Hour Rate: "<<endl;
cin>>e[i].hourlyratre;
	
}
	
}


void calculate(Employee *e,int size){
for(int i=0;i<size;++i){

e[i].salary=e[i].hoursworked*e[i].hourlyratre;

	
}


	
}


display(Employee *e,int size){
	
for(int i=0;i<size;++i){
cout<<"The salary of "<<e[i].name<<" is "<<e[i].salary<<endl;

	
	
}	
	
}




int main(){
int size;
cout<<"Enter the size of employee: "<<endl;
cin>>size;

Employee *e=new Employee[size];	

input(e,size);

calculate(e,size);

display(e,size);


delete[] e;



	
return 0;	
}
