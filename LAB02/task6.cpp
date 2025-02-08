#include<iostream>
#include <bits/stdc++.h>
using namespace std;

struct Student{
string name;
int roll_number;
float marks[3];	
};

void Input(Student *s,int size){
cout<<"Enter the details of students: "<<endl;
for(int i=0;i<size;i++){
cout<<"Enter the name of student: "<<endl;
cin>>s[i].name;

cout<<"Enter the Roll Number of Student: "<<endl;
cin>>s[i].roll_number;

cout<<"Enter the marks of student in three subjects: "<<endl;
for(int j=0;j<3;j++){
cout<<"Subjcet "<<j+1<<" ";
cin>>s[i].marks[j];	
}
}	
}

void Avg(Student *s,int size){

for(int i=0;i<size;i++){
float sum=0;
float average=0;
for(int j=0;j<3;j++){
sum+=s[i].marks[j];	
}	
average=sum/3;
cout<<"The average marks of "<<s[i].name<<" is "<<average<<endl;
}

	
}

int main(){
int size;
cout<<"Enter the number record of students: ";
cin>>size;

Student *s=new Student[size];

Input(s,size);
cout<<endl;
Avg(s,size);	
return 0;	
}
