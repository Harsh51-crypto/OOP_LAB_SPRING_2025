#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int **allocate(int row, int column) {
	int **arr=new int*[row];

	for(int i=0; i<row; i++) {
		arr[i]=new int[column];
	}

	return arr;

}

void deallocate(int **arr,int row,int column) {

	for(int i=0; i<row; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}

void Display(int **matrix,int row,int column) {
	cout<<"Displaying the matrix: "<<endl;
	for(int i=0; i<row; i++) {
		for(int j=0; j<column; j++) {
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}


void input(int **arr,int row,int column) {
	cout<<"Entering the elements: "<<endl;
	for(int i=0; i<row; i++) {
		cout<<"Enter the element of row: "<<i+1<<endl;
		for(int j=0; j<column; j++) {
			cout<<"Enter the element of row: "<<i+1<<" Of column "<<j+1<<endl;
			cin>>arr[i][j];

		}
	}

}

void multi(int **matrix_one,int **matrix_two,int row_one,int column_one,int row_two,int column_two) {

	int **result=allocate(row_one,column_two);

	for(int i=0; i<row_one; i++) {
		for(int j=0; j<column_two; j++) {
			result[i][j]=0;
		}
	}

	for(int i=0; i<row_one; i++) {
		for(int j=0; j<column_two; j++) {
			for(int k=0; k<row_one; k++) {

				result[i][j]+=matrix_one[i][k]*matrix_two[k][j];
			}
		}
	}

	Display(result,row_one,column_two);
	deallocate(result,row_one,column_two);

}
int main() {
	int row_one,column_one;
	int row_two,column_two;

	cout<<"Enter the Row and Colum of Matrix One: "<<endl;
	cin>>row_one>>column_one;

	cout<<"Enter the Row and Colum of Matrix Two : "<<endl;
	cin>>row_two>>column_two;

	if(column_one==row_two) {


		int **matrix_one=allocate(row_one,column_one);
		int **matrix_two=allocate(row_two,column_two);

		input(matrix_one,row_one,column_one);
		input(matrix_two,row_two,column_two);

		multi(matrix_one,matrix_two,row_one,column_one,row_two,column_two);
		deallocate(matrix_one,row_one,column_one);
		deallocate(matrix_two,row_two,column_two);

	} else {
		cout<<"Matrix Opreation Can not be applicable: "<<endl;
	}

	return 0;
}
