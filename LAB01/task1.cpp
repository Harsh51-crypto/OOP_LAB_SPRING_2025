
#include<iostream>
#include<cstring>
using namespace std;
void search(char event_one[][20],char event_two[][20],int a,int b){

char user[20];
cout<<"Enter the name of user: "<<endl;
cin>>user;

int x=0;

for(int i=0;i<a;i++){
if(strcmp(event_one[i],user)==0){
x=1;
cout<<"The participant has registed in event one: "<<endl;	
break;
}	
}

if(x==0){
for(int i=0;i<b;i++){
if(strcmp(event_two[i],user)==0){
x=1;
cout<<"The participant has registed in event two: "<<endl;	
break;
}
}	
}

if(x==0){
cout<<"The particpant has registed neither of two event: "<<endl;	
}
}

amount(char event_one[][20],char event_two[][20],int a,int b){
int count=0;
int donation=10;
for(int i=0;i<a;i++){
count++;	
}

for(int j=0;j<b;j++){
count++;	
}

int total_amount=donation*count;
cout<<"The total donation of both events is: "<<total_amount<<endl;

	
}

print(char event_one[][20],char event_two[][20],int a,int b){
cout<<"event one participants: "<<endl;
for(int i=a-1;i>=0;i--){
cout<<"Participant "<<i+1<<":"<<event_one[i]<<endl;
}

cout<<"event two participants: "<<endl;
for(int i=b-1;i>=0;i--){
cout<<"Participant "<<i+1<<":"<<event_two[i]<<endl;
}	

}

chart(char event_one[][20],char event_two[][20],int a,int b){

cout<<"Event one: "<<endl;
for(int i=0;i<a;i++){
cout<<("* ");	
}
cout<<endl;
cout<<"Event two: "<<endl;
for(int i=0;i<b;i++){
cout<<("* ");	
}


	
}
int main(){
int n;
cout<<"Enter number the participants of event one: "<<endl;
cin>>n;

int m;
cout<<"Enter the number participants of event_two: "<<endl;
cin>>m;

if(n<=5 && m<=5){
char event_one[n][20];
char event_two[m][20];

cout<<"Enter the participants name of event one:  "<<endl;
for(int i=0;i<n;i++){
cout<<"Enter the particpant "<<i+1<<endl;
cin>>event_one[i];	
}	

cout<<"Enter the participants name of event two:  "<<endl;
for(int i=0;i<n;i++){
cout<<"Enter the particpant "<<i+1<<endl;
cin>>event_two[i];	
}

search(event_one,event_two,n,m);

amount(event_one,event_two,n,m);

print(event_one,event_two,n,m);

chart(event_one,event_two,n,m);



	


	

}
else {
cout<<"The maximum limit of participant is 5: "<<endl;
return 0;	
}	
return 0;	
}

