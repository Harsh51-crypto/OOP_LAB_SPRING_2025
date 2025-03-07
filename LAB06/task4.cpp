#include<iostream>
using namespace std;
class Account{
int accountnumber;
float balance;
public:
Account(int accountnumber=0,float balance=1000.0){
this->accountnumber=accountnumber;
this->balance=balance;	
}	
protected:
void setaccountnumber(int account){
if(account>0){
accountnumber=account;	
}
}
void setbalance(float amount){
	if(amount>0.0){
	
balance+=amount;	
}
}
public:
int getaccnum(){
return accountnumber;	
}	

float getbalance(){
return balance;	
}

void DisplayDetails(){
cout<<"Account Number: "<<accountnumber<<endl;
cout<<"Balance: "<<balance<<endl;	
}	
};
class SavingAccount:public Account{
const float intrestRate;
public:
SavingAccount(float rate):intrestRate(rate){
	
}

void SetaccountNumber(int account){
setaccountnumber(account);	
}

void Setbalance(float amount){
setbalance(amount);	
}

void display(){
Account::DisplayDetails();
cout<<"Intrest Rate: "<<intrestRate<<endl;	
}	
};
class CheckingAccount:public Account{
float overdraftlimit;
public:
CheckingAccount(float limit):overdraftlimit(limit){
	
}

void setaccountNumber(int account){
setaccountnumber(account);	
}

void Setbalance(float amount){
setbalance(amount);	
}

void display(){
Account::DisplayDetails();
cout<<"Overdraft Limit: "<<overdraftlimit<<endl;	
}	
};
int main(){
cout<<"---------Saving Account-------------"<<endl;	
int accountnumber;
cout<<"Enter the Account Number: "<<endl;
cin>>accountnumber;

float amount;
cout<<"Amount you want to add: "<<endl;
cin>>amount;

float intrest;
cout<<"Enter the Intrest: "<<endl;
cin>>intrest;
SavingAccount s(intrest);
s.SetaccountNumber(accountnumber);
s.Setbalance(1000.00);


cout<<"---------Checking Account-------------"<<endl;	

cout<<"Enter the Account Number: "<<endl;
cin>>accountnumber;


cout<<"Amount you want to add: "<<endl;
cin>>amount;

float limit;
cout<<"Enter the Overdraftlimit: "<<endl;
cin>>limit;
CheckingAccount c(limit);
c.setaccountNumber(accountnumber);
c.Setbalance(2000);


s.display();
c.display();



return 0;	
}
