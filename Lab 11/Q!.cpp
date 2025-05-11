#include <iostream>
#include <stdexcept>
#include <sstream>
using namespace std;
class DimensionMismatch : public exception
{
   string message;

public:
   DimensionMismatch(string message) : message(message) {}

   const char *what() const noexcept override
   {
      return message.c_str();
   }
};
template <typename T>
class Matrix
{
public:
   T **value;
   int rows;
   int colums;

   Matrix() {}
   Matrix(int rows, int colums) : rows(rows), colums(colums)
   {
      value = new T *[rows];
      for (int i = 0; i < rows; i++)
      {
         value[i] = new T[colums];
      }
   }

   ~Matrix()
   {
      for (int i = 0; i < rows; ++i)
         delete[] value[i];
      delete[] value;
   }

 

   void input()
   {
      for (int i = 0; i < rows; i++)
      {
         cout << "Enter The Element Of rows: " << i + 1 << endl;
         for (int j = 0; j < colums; j++)
         {
            cin >> value[i][j];
         }
      }
   }

   Matrix operator+(const Matrix &obj)
   {

      if (obj.rows != rows || obj.colums != colums)
      {
         stringstream ss;
         ss << "Matrices Must have same dimesnion  " << rows << "X" << colums << " VS " << obj. rows << "X" << obj.colums;
         throw DimensionMismatch(ss.str());
      }

      Matrix<T> result(rows, colums);
      for (int i = 0; i < rows; i++)
      {
         for (int j = 0; j < colums; j++)
         {
            result.value[i][j] = value[i][j] + obj.value[i][j];
         }
      }
      return result;
   }

   void display()
   {
      for (int i = 0; i < rows; i++)
      {
         for (int j = 0; j < colums; j++)
         {
            cout << value[i][j];
         }
         cout << endl;
      }
   }
};
int main()
{
   try {
      Matrix<int> A(2, 2);
      Matrix<int> B(3, 3);

      cout << "Input Matrix A:" << endl;
      A.input();
      cout << "Input Matrix B:" << endl;
      B.input();

      cout << "\nMatrix A:\n";
      A.display();
      cout << "\nMatrix B:\n";
      B.display();

      Matrix<int> C = A + B;
      cout << "\nMatrix A + B:\n";
      C.display();
  }
  catch (const exception& e) {
      cout << "\nError: " << e.what() << endl;
  }

   return 0;
}