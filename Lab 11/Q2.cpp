#include <iostream>
#include <stdexcept>
using namespace std;
class InvalidTempratureException : public exception
{

public:
   const char *what() const noexcept override
   {
      return "Invalid Temprature! ";
   }
};

template <typename T>
double convert(T &celsius)
{
   cout << "Attempting to convert: " << celsius << endl;

   if (celsius < (-273.15))
   {
      throw InvalidTempratureException();
   }

   return (((9 / 5) * celsius) + 32);
}
int main()
{

   try
   {

      double temprature;
      cout << "Enter The temprature! " << endl;
      cin >> temprature;

      double result = convert(temprature);
      cout << "Temprature in Farhnhiet! " << result;
   }
   catch (const exception &e)
   {
      cout << e.what() << endl;
   }
   return 0;
}