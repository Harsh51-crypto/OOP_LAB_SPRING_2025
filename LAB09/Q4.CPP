#include <iostream>
using namespace std;
class WeatherSensor
{
public:
   virtual void readData() = 0;
   virtual void DisplayReport() = 0;
};

class Thermometer : public WeatherSensor
{
private:
   double temprature; // in celsius//
public:
   Thermometer()
   {
      temprature = 0;
   }

   void readData()
   {
      cout << "Enter The Temprature: " << endl;
      cin >> temprature;
   }

   void DisplayReport()
   {
      cout << "Temprature Detected By This Sensor is: " << temprature << " Centigrade" << endl;
   }
};

class Barometer : public WeatherSensor
{
   double pressure;

public:
   Barometer()
   {
      pressure = 0;
   }

   void readData()
   {
      cout << "Enter The Atmospheric Pressure: " << endl;
      cin >> pressure;
   }

   void DisplayReport()
   {
      cout << "Atmosphere Pressure Detected By This Sensor is: " << pressure << " atm" << endl;
   }
};

int main()
{
   WeatherSensor *w;
   w = new Thermometer();
   w->readData();
   w->DisplayReport();

   w = new Barometer();
   w->readData();
   w->DisplayReport();

   return 0;
}
