#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
struct Inventory{
string product_name;
int product_id;
int quantity;
float price;	
};

void Input(Inventory *I,int size){
cout<<"Enter the Product Details: "<<endl<<endl;
for(int i=0;i<size;i++){
cout<<"Enter the Product Name: ";
cin>>I[i].product_name;
cout<<endl;

cout<<"Enter the Product Id: ";
cin>>I[i].product_id;
cout<<endl;

cout<<"Enter the Quantity of Product: ";
cin>>I[i].quantity;
cout<<endl;

cout<<"Enter the Price: ";
cin>>I[i].price;
cout<<endl;
}	
}

void Display(Inventory *I,int size){
float sum=0;
float total=1;
for(int i=0;i<size;i++){
total=I[i].quantity*I[i].price;	
sum+=total;
}
cout<<"The total value of Inventory is: "<<sum<<endl;
	
}

int main(){
int size;
cout<<"How much type products you want to add: "<<endl;
cin>>size;

Inventory *I=new Inventory[size];

Input(I,size);	
Display(I,size);
delete[] I;
return 0;	
}
