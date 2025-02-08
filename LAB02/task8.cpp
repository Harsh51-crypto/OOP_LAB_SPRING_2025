#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int *allocate(int size){
int *arr=new int[size];

return arr;	
}

void Input(int *arr,int size){
cout<<"Enter the elements of array: "<<endl;
for(int i=0;i<size;i++){
cout<<"Element "<<i+1<<": ";
cin>>arr[i];
}
}

void Display(int *arr,int size){
cout<<"Displaying array elements: "<<endl;
for(int i=0;i<size;i++){
cout<<"Element "<<i+1<<": "<<arr[i]<<endl;	
}	
}



int main(){
int size;
cout<<"Enter the size of array: "<<endl;
cin>>size;

int *arr=allocate(size);
Input(arr,size);
Display(arr,size);

delete[] arr;
	
return 0;	
}
