Task 4:
#include<iostream>
using namespace std;

void average(int city[4][4][7]){
	
	
int avg;
cout<<"MONTHLY AVERAGE:"<<endl;
for(int i=0;i<4;i++){
int sum=0;

for(int j=0;j<4;j++){
for(int k=0;k<7;k++){
sum+=city[i][j][k];	
}	
}
avg=sum/7;
cout<<"The average of city "<<i+1<<" is "<<avg;
cout<<endl;	
}	
}

void best_city(int city[4][4][7]){
int max=-1;
int index=-1;
int avg_one;
int avg_four;
for(int i=0;i<4;i++){
int week_one=0;
int week_four=0;

for(int k=0;k<7;k++){
week_one+=city[i][0][k];
week_four+=city[i][3][k];	
}
avg_one=week_one/7;
avg_four=week_four/7;

int diff=0;
if(avg_four>=avg_one) diff=avg_four-avg_one;
else diff=avg_one-avg_four;

if(diff>max){
max=diff;
index=i;	
}


}
	
cout<<"The most improved city is: "<<index<<" with most improved air quality IS: "<<max;
	
}


void weekly_average(int city[4][4][7]){
	
int avg;
for(int i=0;i<4;i++){
	
int sum=0;	
for(int j=0;j<4;j++){
for(int k=0;k<7;k++){
	
sum+=city[i][j][k];	
}
avg=sum/7;
cout<<"WEEKLY AVERAGE OF CITY: "<<i+1<<" OF WEAK:"<<j+1<<" IS "<<avg<<endl;
}
cout<<endl;	
}	
}


void pollution(int city[4][4][7]){
for(int i=0;i<4;i++){
for(int j=0;j<4;j++){
for(int k=0;k<7;k++){
if(city[i][j][k]>150){
cout << "Day: " << k + 1 << " For city: " << i + 1 << " of week " << j + 1 << " is polluted." << endl;
	
}
cout<<endl;	
}	
}	
}	
	
}


void compariosn(int city[4][4][7]){


for(int i=0;i<4;i++){
int max=-1;
int min=1000;
for(int j=0;j<4;++j){
for(int k=0;k<7;k++){
if(city[i][j][k]>max){
max=city[i][j][k];
	
}
if(city[i][j][k]<min){
min=city[i][j][k];	
}	
}
	
}
cout<<"THE HIGHEST AQI OF CITY: "<<i+1<<" IS: "<<max<<endl;
cout<<"THE LOWEST AQI OF CITY: "<<i+1<<" IS: "<<min<<endl;
cout<<endl;	
}
	
}

int main(){
 int city[4][4][7] = {
        { // City A
            {120, 135, 140, 125, 130, 145, 150},  // Week 1
            {110, 118, 125, 119, 134, 138, 140},  // Week 2
            {105, 115, 120, 122, 130, 135, 140},  // Week 3
            {98, 110, 120, 125, 128, 130, 135}    // Week 4
        },
        { // City B
            {80, 85, 90, 88, 95, 100, 102},       // Week 1
            {78, 82, 88, 92, 98, 105, 108},       // Week 2
            {85, 89, 92, 95, 100, 103, 107},      // Week 3
            {90, 95, 98, 100, 105, 108, 110}      // Week 4
        },
        { // City C
            {150, 155, 160, 165, 170, 175, 180},  // Week 1
            {145, 148, 152, 157, 160, 165, 170},  // Week 2
            {138, 142, 145, 150, 155, 160, 162},  // Week 3
            {130, 135, 140, 145, 150, 155, 160}   // Week 4
        },
        { // City D
            {60, 65, 70, 75, 80, 85, 90},         // Week 1
            {55, 58, 62, 68, 72, 78, 82},         // Week 2
            {50, 55, 60, 65, 70, 75, 80},         // Week 3
            {45, 50, 55, 60, 65, 70, 75}          // Week 4
        }
    };
	
average(city);
cout<<endl;
best_city(city);

cout<<endl<<endl;
cout<<"REPORT OF AIR QUALITY INDEX OF FOUR CITIES: "<<endl;  
weekly_average(city);
pollution(city);
compariosn(city);
	
		
return 0;	
}

