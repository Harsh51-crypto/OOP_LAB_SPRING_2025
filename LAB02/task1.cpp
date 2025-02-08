#include<iostream>
using namespace std;
struct Books{
string title;
string author;
int year;	
};

void input(Books *b,int size){

for(int i=0;i<size;++i){
	
cout<<"Title of Book: "<<i+1<<endl;
cin>>b[i].title;
cout<<endl;

cout<<"Author of Book: "<<i+1<<endl;
cin>>b[i].author;
cout<<endl;

cout<<"Year of Book: "<<i+1<<endl;
cin>>b[i].year;
cout<<endl;

}
}


void display(Books *b,int size){
cout<<"Details of book after 1999: "<<endl;


for(int i=0;i<size;++i){
if(b[i].year>1999){

cout<<"TITLE OF BOOK: "<<i+1<<" IS "<<b[i].title<<endl;
cout<<"AUTHOR OF BOOK: "<<i+1<<" IS "<<b[i].author<<endl;	
cout<<"YEAR OF BOOK: "<<i+1<<" IS "<<b[i].year<<endl;
}
else {
cout<<"BOOK: "<<i+1<<" HAS PUBLISHED BEFORE 1999: "<<endl;	
}
	
}	
	
}


int main(){
int size;
cout<<"Enter the number  of books: "<<endl;
cin>>size;


Books *b=new Books[size];


input(b,size);
display(b,size);


delete[] b;



	
return 0;	
}
