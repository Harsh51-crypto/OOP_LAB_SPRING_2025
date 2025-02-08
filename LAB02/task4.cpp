#include<iostream>
using namespace std;

void Input(string *str,int size){

for(int i=0;i<size;i++){
cout<<"String "<<i+1<<" ";
cin>>str[i];	
}
	
}

void sort(string *str,int size){
cout<<"Sorting The array: "<<endl;
for(int i=0;i<size;i++){
for(int j=i+1;j<size;j++){
if(str[i]>str[j]){  //sorting in ascending order//
string temp=str[i];
str[i]=str[j];
str[j]=temp;
}	
}	
	
}
}

void display(string *str,int size){
cout<<"Displaying the array: "<<endl;
for(int i=0;i<size;i++){
cout<<"String "<<i+1<<": "<<str[i]<<endl;
	
}	
}


int main(){
int size;
cout<<"Number of strings: "<<endl;
cin>>size;

string *str=new string[size];

Input(str,size);
sort(str,size);
display(str,size);

delete[] str;
	
return 0;	
}
