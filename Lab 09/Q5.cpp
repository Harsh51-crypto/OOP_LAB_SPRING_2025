#include "iostream"
using namespace std;
class Shippment
{
protected:
   double weight;
   const int trackingid;

public:
   Shippment(double weight, int id) : weight(weight), trackingid(id) {}

   virtual void estimatedDeliveryTime() = 0;
   virtual void showDetails() = 0;
};
class AirFreight : public Shippment
{
public:
   AirFreight(double weight, int id) : Shippment(weight, id) {}

   void estimatedDeliveryTime()
   {
      cout << "-----------Flight Ship Details-------------" << endl;
      cout << "The Delivery will done in 2 to 5 working Days: " << endl;
   }

   void showDetails()
   {
      cout << "Total Weight of Parcel: " << weight << " KG" << endl;
      cout << "Tracking ID: " << trackingid << endl;
   }
};
class GroundShippment : public Shippment
{
public:
   GroundShippment(double weight, int id) : Shippment(weight, id) {}

   void estimatedDeliveryTime()
   {
      cout << "The Delivery will done in 5 to 8 working Days: " << endl;
   }

   void showDetails()
   {
      cout << "------------Ground Ship Details------------" << endl;
      cout << "Total Weight of Parcel: " << weight << " KG" << endl;
      cout << "Tracking ID: " << trackingid << endl;
   }
};
int main()
{
   Shippment *s;
   s = new AirFreight(500, 100);
   s->estimatedDeliveryTime();
   s->showDetails();
   cout << endl
        << endl;

   s = new GroundShippment(400, 102);
   s->estimatedDeliveryTime();
   s->showDetails();

   return 0;
}