#include <iostream>
using namespace std;
class MenuItem
{
protected:
   string dishname;
   double price;

public:
   MenuItem(string dishname, double price) : dishname(dishname), price(price) {}

   virtual const void ShowDetails() = 0;
   virtual const void Prepare() = 0;
};

class Appetizer : public MenuItem
{
public:
   Appetizer(string name, double price) : MenuItem(name, price) {}

   const void ShowDetails()
   {
      cout << "-----Appetizer-----------" << endl;
      cout << "Dish Name: " << dishname << endl;
      cout << "Price: " << price << endl;
   }

   const void Prepare()
   {
      cout << "Preparing Appetizer: " << endl;
   }
};
class MainCourse : public MenuItem
{
public:
   MainCourse(string name, double price) : MenuItem(name, price) {}

   const void ShowDetails()
   {
      cout << "-----------Main-Couse------------" << endl;
      cout << "Dish Name: " << dishname << endl;
      cout << "Price: " << price << endl;
   }

   const void Prepare()
   {
      cout << "Preparing Main Course: " << endl;
   }
};
int main()
{
   MenuItem *menu;
   menu = new Appetizer("Prawns", 2500);
   menu->ShowDetails();
   menu->Prepare();

   cout << endl
        << endl;

   menu = new MainCourse("Italian Dish", 4000);
   menu->ShowDetails();
   menu->Prepare();
   return 0;
}
