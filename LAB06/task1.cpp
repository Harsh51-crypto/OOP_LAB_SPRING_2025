#include<iostream>
using namespace std;
class Employee{
protected:	
string name;
float salary;
public:
Employee(string name,float salary){
this->name=name;
this->salary=salary;	
}
void display(){
cout<<"Name: "<<name<<endl;
cout<<"Salary: "<<salary<<endl;	
}
	
};
class Manager:protected Employee{
float bonus;
public:
Manager(string name,float salary,float bonus):Employee(name,salary),bonus(bonus){
}

void display(){
	Employee::display();
cout<<"Bonus: "<<bonus<<endl;	
}	
};
int main(){
Manager m("Harsh",75600,3400);
m.display();
return 0;	
}
