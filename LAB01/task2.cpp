#include<iostream>
using namespace std;

void pollution(int city[4][7]){
	
for(int i=0;i<4;i++){
for(int j=0;j<7;j++){
if(city[i][j]>150){
cout<<"DAY "<<j+1<<" IS POLLUTATED FOR CITY "<<i+1<<endl;	
}	
}	
}

	
}

int main(){
int city[4][7];


cout<<"Enter the AIR QUALITY INDEX FOR FOUR CITIES: "<<endl;
for(int i=0;i<4;i++){
	cout<<"AQI OF CITY: "<<i+1<<endl;
for(int j=0;j<7;j++){
cout<<"Day: "<<j+1<<endl;
cin>>city[i][j];	
}
cout<<endl;	
}

int max=-1000;
int avg;

for(int i=0;i<4;i++){
int sum=0;	
for(int j=0;j<7;j++){
sum+=city[i][j];	
	
}	
avg=sum/7;
cout<<"The average AQI of city "<<i+1<<" is "<<avg<<endl;
if(max<=avg){
max=avg;	
}

}

int check_avg;

cout<<endl<<endl;

for(int i=0;i<4;i++){
	int check=0;
for(int j=0;j<7;j++){
check+=city[i][j];	
	
}
check_avg=check/7;
if(check_avg==max){
cout<<"The worst air Quality of city is: "<<i+1<<" With AQI is: "<<max<<endl;	
}

	
}

pollution(city);


cout<<"Data Visulization: "<<endl<<endl;
for(int i=0;i<4;i++){
cout<<"City "<<i+1<<endl;	
for(int j=0;j<7;j++){
if(city[i][j]>50){
cout<<"* ";	
}	
}
cout<<endl;	
}












	
return 0;	
}

