#include<iostream>
using namespace std;
class Person{
protected:
string name;
int age;

public:
Person(string name,int age):name(name),age(age){
}	
void display(){
cout<<"Name: "<<name<<endl;
cout<<"Age: "<<age<<endl;	
}
	
};
class Teacher:public Person{
protected:	
string subject;
public:
Teacher(string name,int age,string subject):Person(name,age),subject(subject){
}
void displayDetails(){
Person::display();	
cout<<"Subject: "<<subject<<endl;	
}	
};
class Reseacher:public Teacher{
protected:
string researcharea;
public:
Reseacher(string name,int age,string subject,string area):Teacher(name,age,subject),researcharea(area){
}
void DisplayDetails(){
Teacher::displayDetails();
cout<<"Research Area: "<<researcharea<<endl;	
}	
};
class Professor:public Reseacher{
protected:
int publications;
public:
Professor(string name,int age,string subject,string area,int pub):Reseacher(name,age,subject,area),publications(pub){
}

void DIsplayDetails(){
Reseacher::DisplayDetails();
cout<<"Publications: "<<publications<<endl;	
}
};
int main(){
Professor p("Newton",29,"Physics","NEW-YORK",5);
p.DIsplayDetails();
return 0;	
}
