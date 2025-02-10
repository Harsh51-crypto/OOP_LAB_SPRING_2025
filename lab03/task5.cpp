#include<iostream>
#include<string.h>
using namespace std;
class MusicPlayer{
string playlist[20];
string currentplayingsong;
int songcount=10;

public:
MusicPlayer(){
string songs[10] = {
    "Bohemian Rhapsody",
    "Imagine",
    "Hotel California",
    "Stairway to Heaven",
    "Billie Jean",
    "Smells Like Teen Spirit",
    "Shape of You",
    "Someone Like You",
    "Blinding Lights",
    "Rolling in the Deep"
};

for(int i=0;i<10;i++){
playlist[i]=songs[i];	
}
currentplayingsong="Currently None of any song is playing! ";

}


public:
void addsong(string song){
if(songcount<20){

playlist[songcount]=song;
songcount++;
cout<<"Song Added Successfully: "<<endl;		
}
else{
cout<<"Can not Download Out of Storage! "<<endl;	
}
}

void RemoveSong(string song){
bool found=false;
int index=-1;
for(int i=0;i<songcount;i++){
if(playlist[i]==song){
found=true;
index=i;
break;	
}
}

if(found==true){
for(int i=index;i<songcount;i++){
playlist[i]=playlist[i+1];	
}
songcount--;
}
else{
cout<<"This song is not in playlist! "<<endl;
}	
}
	
	
void PlaySong(string song){
bool found=false;
for(int i=0;i<songcount;i++){
if(playlist[i]==song){
found=true;
break;	
}
}

if(found==true){
currentplayingsong=song;
cout<<"Playing: "<<song<<endl;	
}	
else{
cout<<"This song is not in play list: "<<endl;	
}
}	


void Displayplaylist(){
for(int i=0;i<songcount;i++){
cout<<playlist[i]<<endl;	
}	
}


void DisplayCurrentSong(){
cout<<"Currently Playing: "<<currentplayingsong<<endl;	
}
	
};

int main(){
MusicPlayer m;
string song;
int choice;

do{
cout<<"1: Add Song"<<endl;
cout<<"2: Remove Song"<<endl;
cout<<"3: Display PlayList"<<endl;
cout<<"4: Display Current Song"<<endl;
cout<<"5: Play Song"<<endl;
cout<<"6: Exit"<<endl<<endl;
cout<<"Enter the choice! "<<endl;
cin>>choice;
cin.ignore();

switch(choice){
case 1:
cout<<"Enter the Song Name: "<<endl;
getline(cin,song);
m.addsong(song);
break;	


case 2:
cout<<"Enter the Song Name: "<<endl;
getline(cin,song);
m.RemoveSong(song);
break;

case 3:
m.Displayplaylist();
break;

case 4:
m.DisplayCurrentSong();
break;

case 5:
cout<<"Enter the Song Name: "<<endl;
getline(cin,song);
m.PlaySong(song);
break;

case 6:
cout<<"Exiting: "<<endl;
return 0;
break;
	
}


	
}
while(choice!=6);

return 0;	
}
