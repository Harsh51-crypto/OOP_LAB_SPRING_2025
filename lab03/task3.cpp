#include<iostream>
#include<string>
using namespace std;
class Library{
string booklist[10];
string borrowedbooks[10];
string availablebooks[10];
int count=4;
int borrow=0;
public:

Library(){
string temp[10]={"Clean Code: A Handbook of Agile Software Craftsmanship",
        "The Pragmatic Programmer: Your Journey to Mastery",
        "Design Patterns: Elements of Reusable Object-Oriented Software",
        "Code Complete: A Practical Handbook of Software Construction",
        };	
        
        
for(int i=0;i<4;i++){
booklist[i]=temp[i];
availablebooks[i]=booklist[i];	
}               
}

void AddBooks(string b){
if(count<10){
booklist[count]=b;
availablebooks[count]=b;
count++;	
cout<<b<<" book has been added Successfully! "<<endl<<endl;	
}
else{
cout<<"The Library has reached out of its Capicity! "<<endl<<endl;	
}

}

void LendBook(string b){
bool found=false;
int index=-1;
for(int i=0;i<count;i++){
if(availablebooks[i]==b){
found=true;
index=i;
break;	
}
}

if(found==true){
borrowedbooks[borrow]=b;
borrow++;
cout<<"Book Lend Successfully! "<<endl;
availablebooks[index]="";	
}
else{
cout<<"This books is not available: "<<endl;	
}
}
void ReturnBooks(string b){
int a=0;
int index=-1;

for(int i=0;i<count;i++){
if(borrowedbooks[i]==b){
a=1;
index=i;
}
}


if(a==1){
availablebooks[count]=b;
borrow--;
borrowedbooks[index]="";
}
else{
cout<<"This Book was not borrowed: "<<endl;	
}
}
void Display(){
cout<<"BOOK LIST: "<<endl;
for(int i=0;i<count;i++){
cout<<booklist[i]<<endl;	
}

cout<<endl<<endl;
cout<<"Available Books: "<<endl;
for(int i=0;i<count;i++){
cout<<availablebooks[i]<<endl;	
}
cout<<endl<<endl;

cout<<"Borrowed Books: "<<endl;
for(int i=0;i<borrow;i++){
cout<<borrowedbooks[i]<<endl;	
}
	
}
	
};
int main(){
Library l;	
	
int choice;
string bookname;
cout<<"------------Welcome To Library Managment---------------"<<endl;
do{
cout<<"1: Add Book: "<<endl;
cout<<"2: Lend Book: "<<endl;
cout<<"3: Return Book: "<<endl;	
cout<<"4: Display Book: "<<endl;
cout<<"5: Exit: "<<endl<<endl;
cout<<"Enter the Choice! "<<endl;
cin>>choice;
cin.ignore();
switch(choice){
case 1:
cout<<"Enter the book name: "<<endl;
getline(cin,bookname);
l.AddBooks(bookname);
break;

case 2:
cout<<"Enter the Book name: "<<endl;
getline(cin,bookname);
l.LendBook(bookname);
break;

case 3:
cout<<"Book Name which you have leaned: "<<endl;
getline(cin,bookname);
l.ReturnBooks(bookname);	
break;

case 4:
l.Display();
break;

case 5:
cout<<"Exiting the programe! "<<endl;
return 0;
break;

default:
cout<<"System is Down! "<<endl;
break;	
}



}
while(choice!=5);
	
	
return 0;	
}
