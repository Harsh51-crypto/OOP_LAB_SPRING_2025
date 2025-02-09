#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Wallet{
string ownerName;
double totalAmount;
string transcitionHistory[100];
int count;

public:

Wallet(string name,double totalAmount,double transcitionHistory,int count ){
this->ownerName=name;
this->totalAmount=totalAmount;
this->transcitionHistory[0]=transcitionHistory;	
this->count=0;
}	
	
void addMoney(double amount){
if(amount>0){
totalAmount+=amount;
cout<<"Amount has been added successful! "<<endl;
if(count<100){
transcitionHistory[count]="Deposited: ";
count++;	
}





	
}
else{
cout<<"Please Enter valid amount: "<<endl;	
}	

}

void spendMoney(double amount){
if(totalAmount>=amount){
totalAmount=totalAmount-amount;
cout<<"Amount Has Been Witdrawed Successfully! "<<endl;
if(count<100){
transcitionHistory[count]="Withdrawed: ";
count++;	
}	
}
else{
cout<<"Not Enough Fund: "<<endl;	
}

		
}

void Display(){
cout<<"Displaying Transiction history! "<<endl<<endl;	
for(int i=0;i<count;i++){
cout<<transcitionHistory[i]<<endl;	
}

cout<<endl<<"Your Total Current amount is: "<<totalAmount<<endl;
	
	
}

void notify(){
if(totalAmount<500){

cout<<"Alert! Amount is less than 500: "<<endl;	
}
}
	
};
int main(){
Wallet w("Harsh",0,0,0);



int choice;
do{
cout<<"----------Wallet---------"<<endl<<endl;
cout<<"1: Add Money: "<<endl;
cout<<"2: Spend Money:" <<endl;
cout<<"3: Display Transcition History: "<<endl;
cout<<"4: Exit: "<<endl<<endl;
cout<<"Enter your choice! "<<endl;
cin>>choice;
double amount;
double spent_money;

switch(choice){
case 1:

cout<<"Enter your Amount: "<<endl;
cin>>amount;

w.addMoney(amount);
break;

case 2:

cout<<"Enter the amount: "<<endl;
cin>>spent_money;
w.spendMoney(spent_money);
w.notify();
break;

case 3:
w.Display();
break;

case 4:
cout<<"Exiting bye bye! "<<endl;
return 0;
break;
cout<<endl<<endl;

}
 	

}
while(choice!=4);




	
return 0;	
}

