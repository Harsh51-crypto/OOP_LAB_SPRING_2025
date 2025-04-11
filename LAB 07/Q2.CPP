#include <iostream>
using namespace std;
class Product
{
protected:
   const int productid;
   string name;
   double price;
   static int stockquantity;

public:
   Product(int id, string name, double price) : productid(id), name(name), price(price)
   {
   }
   void applydiscount()
   {
      if (price > 4000.00)
      {
         price = price - (price * 0.1);
      }
      else
      {
         cout << "No Discount! " << endl;
      }
   }
   float calculateprice(int quantity)
   {
      return quantity * price;
   }
   virtual void display()
   {
      cout << "Product Name: " << name << endl;
      cout << "Product ID: " << productid << endl;
      cout << "Price: " << price << endl;
   }
};
class Electronics : public Product
{
   string brand;
   int warrantyperiod;

public:
   Electronics(int id, string name, double price, string brand, int period) : Product(id, name, price), brand(brand), warrantyperiod(period) {}

   void display()
   {
      cout << "  Elelctronic Items Details: " << endl;
      cout << "Product Name: " << name << endl;
      cout << "Brand: " << brand << endl;
      cout << "Product ID: " << productid << endl;
      cout << "Price: " << price << endl;
      cout << "Warranty Period: " << warrantyperiod << endl;
   }
};
class Clothing : public Product
{
   int size;
   string color;
   string fabricmaterial;

public:
   Clothing(int id, string name, double price, int size, string color, string fabricmaterial) : Product(id, name, price), size(size), color(color), fabricmaterial(fabricmaterial) {}

   void applydiscount()
   {
      if (fabricmaterial == "Cotton")
      {
         price = price - (price * 0.15);
      }
      else if (fabricmaterial == "Silk")
      {
         price = price - (price * 0.25);
      }
      else
      {
         cout << "No Discount!" << endl;
      }
   }
   void display()
   {
      cout << "Cloting Items Details: " << endl;
      cout << " Product Name: " << name << endl;
      cout << " Product ID: " << productid << endl;
      cout << " Price: " << price << endl;
      cout << " Size: " << size << endl;
      cout << " Color: " << color << endl;
      cout << " Fabric Material: " << fabricmaterial << endl;
   }

   void applyDiscount()
   {
      if (fabricmaterial == "Cotton")
      {
         price = price - (price * 0.15);
      }
      else if (fabricmaterial == "Silk")
      {
         price = price - (price * 0.25);
      }
      else
      {
         cout << "No Discount!" << endl;
      }
   }
};
class FoodItem : public Product
{
   string expirydate;
   double calories;

public:
   FoodItem(int id, string name, double price, string date, double cal) : Product(id, name, price), expirydate(date), calories(cal) {}

   float calculateprice(int quantity)
   {
      if (quantity > 10)
      {
         price = price - (price * 0.1);
      }
      else
      {
         cout << "No Discount!" << endl;
      }
      return quantity * price;
   }
};
class Book : public Product
{
   string author;
   string genre;

public:
   Book(int id, string name, double price, string author, string genre) : Product(id, name, price), author(author), genre(genre) {}

   void display()
   {
      cout << "  Book Details: " << endl;
      cout << "Product Name: " << name << endl;
      cout << "Product ID: " << productid << endl;
      cout << "Price: " << price << endl;
      cout << "Author: " << author << endl;
      cout << "Genre: " << genre << endl;
   }
};

float operator+(Product &p, Product &p2)
{
   return p.calculateprice(2) + p2.calculateprice(2);
}

ostream &operator<<(ostream &COUT, Product &p)
{
   p.display();
   return COUT;
}

int main()
{

   Electronics e(1, "Laptop", 50000.00, "Dell", 2);
   Clothing c(2, "Shirt", 2000.00, 40, "Blue", "Cotton");
   FoodItem f(3, "Biscuits", 50.00, "12/12/2022", 100);
   Book b(4, "Harry Potter", 500.00, "J.K. Rowling", "Fantasy");

   cout << endl;
   cout << e << " " << c << " " << f << " " << b << endl;

   double total = e + c;
   cout << "Total Price of Electronics Item and Clothing: " << total << endl;

   return 0;
}
