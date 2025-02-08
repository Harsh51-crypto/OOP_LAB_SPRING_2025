#include<iostream>
using namespace std;

int **allocate(int rows,int colums){

int **matrix=new int*[rows];

for(int i=0;i<rows;++i){
matrix[i]=new int[colums];	
}
	

return matrix;
}


void deallocate(int **matrix,int rows){
for(int i=0;i<rows;i++){
delete[]matrix[i];	
}

delete[] matrix;
}

int **addition(int**matrix_one,int**matrix_two,int rows,int colums){

int **result=allocate(rows,colums);



for(int i=0;i<rows;i++){
for(int j=0;j<colums;j++){
result[i][j]=matrix_one[i][j]+matrix_two[i][j];	
}	
}



	
	
return result;	
	
}


void input(int **matrix_one,int rows,int colums){

for(int i=0;i<rows;i++){
cout<<"Enter the elements of row: "<<i+1<<endl;
for(int j=0;j<colums;j++){
cout<<"Enter the elements of row: "<<i+1<<" of colum: "<<j+1<<endl;
cin>>matrix_one[i][j];	
}	
}
	
}



int **substraction(int**matrix_one,int**matrix_two,int rows,int colums){
int **result=allocate(rows,colums);





for(int i=0;i<rows;i++){
for(int j=0;j<colums;j++){
result[i][j]=matrix_one[i][j]-matrix_two[i][j];	
}	
}



	
	
return result;	
	
}

void display(int **result,int rows,int colums){
	
for(int i=0;i<rows;++i){
for(int j=0;j<colums;++j){
cout<<result[i][j]<<" ";	
}
cout<<endl;	
}	
	
}







int main(){

int rows_one,rows_two;
int colums_one,colums_two;

cout<<"Enter the number of rows and colums of matrix one: "<<endl;
cin>>rows_one>>colums_one;


cout<<"Enter the number of rows and colums of matrix two: "<<endl;
cin>>rows_two>>colums_two;



int**matrix_one=allocate(rows_one,colums_one);

int**matrix_two=allocate(rows_two,colums_two);


cout<<"Enter the element of matrix one: "<<endl;
input(matrix_one,rows_one,colums_one);

cout<<"Enter the element of matrix two: "<<endl;
input(matrix_two,rows_two,colums_two);


	
if(rows_one==rows_two && colums_one==colums_two){

int **diff=substraction(matrix_one,matrix_two,rows_one,colums_one);	
int **sum=addition(matrix_one,matrix_two,rows_one,colums_one);


cout<<"The sum of matrix is: "<<endl;
display(sum,rows_one,colums_one);


cout<<"The differnce of matrix is: "<<endl;
display(diff,rows_one,colums_one);


deallocate(matrix_one, rows_one);
deallocate(matrix_two, rows_two);
deallocate(sum, rows_one);
deallocate(diff, rows_one);

}
else{
cout<<"THE ADDITION AND SUBSTRACTION OPREATION CAN NOT BE APPLICABLE BECAUSE DIMENSION OF BOTH MATRIX ARE NOT SAME! "<<endl;	
}



	
return 0;	
}
