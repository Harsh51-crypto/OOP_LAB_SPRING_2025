   #include "iostream"
   #include <math.h>
   using namespace std;
   class Complex
   {
      int real;
      int imag;

   public:
      Complex()
      {
      }
      Complex(int real, int imag) : real(real), imag(imag) {}

      Complex operator+(const Complex &c)
      {
         Complex result;
         result.real = real + c.real;
         result.imag = imag + c.imag;
         return result;
      }

      Complex operator-(const Complex &c)
      {
         Complex result;
         result.real = real - c.real;
         result.imag = imag - c.imag;
         return result;
      }

      Complex operator*(const Complex &c)
      {
         Complex result;
         result.real = real * c.real;
         result.imag = imag * c.imag;
         return result;
      }

      Complex operator/(const Complex &c)
      {
         Complex result;
         if (real != 0)
         {
            result.real = real / c.real;
         }
         if (imag != 0)
         {
            result.imag = imag / c.imag;
         }
         return result;
      }

      int getreal()
      {
         return real;
      }
      int getimag()
      {
         return imag;
      }

      friend int magnitude(Complex &);
   };
   ostream &operator<<(ostream &cout, Complex &c)
   {
      cout << "Real Number: " << c.getreal() << endl;
      cout << "Imaginary Number: " << c.getimag() << "i" << endl;
      return cout;
   }

   int magnitude(Complex &c)
   {
      int absolute = pow((pow(c.real, 2) + pow(c.imag, 2)), 0.5);
      return absolute;
   }
   int main()
   {
      Complex c1(2, 3);
      Complex c2(5, 3);
      cout << c1 << c2;
      cout << "------Addition------" << endl;
      Complex c3 = c1 + c2;
      cout << c3;

      cout << "------Multiplication-------" << endl;
      c3 = c1 * c2;
      cout << c3;

      cout << "--------Subtraction--------" << endl;
      c3 = c1 - c2;
      cout << c3;

      cout << "---------Divison----------" << endl;
      c3 = c1 / c2;
      cout << c3;

      cout << "Magnitude of: " << c1;
      int absolute = magnitude(c1);
      cout << "Absolute: " << absolute << endl;

      return 0;
   }