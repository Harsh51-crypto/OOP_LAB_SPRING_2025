#include <iostream>
using namespace std;
class Device
{
    protected:
   int deviceid;
   string devicename;
   bool status;
   string location;

public:
   Device(string name, int id, bool status, string location) : devicename(name), deviceid(id), status(status), location(location) {}

   virtual void setturnon()
   {
      status = true;
   }
   virtual void setturnoff()
   {
      status = false;
   }
   virtual void getstatus()
   {
      if (status == true)
      {
         cout << "ON: " << endl;
      }
      else
      {
         cout << "OF: " << endl;
      }
   }
   virtual void displayinfo()
   {
      cout << "Device: " << devicename << endl;
      cout << "ID: " << deviceid << endl;
      if (status == true)
      {
         cout << "ON: " << endl;
      }
      else
      {
         cout << "PF: " << endl;
      }
      cout << "Location: " << location << endl;
   }
};
class Light : public Device
{
   string brightnesslevel; // high or low // medium//
   string colormode;

public:
   Light(string name, int id, bool status, string location, string brightness, string mode) : Device(name, id, status, location), brightnesslevel(brightness), colormode(mode) {}

   void displayinfo()
   {
      cout << "Device: " << devicename << endl;
      cout << "ID: " << deviceid << endl;
      if (status == true)
      {
         cout << "ON: " << endl;
      }
      else
      {
         cout << "PF: " << endl;
      }
      cout << "Location: " << location << endl;

      cout << "Brightness Level: " << brightnesslevel << endl;
      cout << "Color Mode: " << colormode << endl;
   }
};
class Thermostat : public Device
{
   int temprature;
   string mode;
   int targettemprature;

public:
   Thermostat(string name, int id, bool status, string location, int temp, string mode, int target) : Device(name, id, status, location), temprature(temp), targettemprature(target), mode(mode) {}

   void getstatus()
   {
      cout << "Temprature: " << temprature << " Centigrade" << endl;
   }
};
class SecurityCamera : public Device
{
   string resolution;
   bool recordingstatus;
   bool nightvisionenabled;

public:
   SecurityCamera(string name, int id, bool status, string location, string res, bool record, bool night) : Device(name, id, status, location), resolution(res), recordingstatus(record), nightvisionenabled(night) {}

   void setturnon()
   {
      status = true;
      recordingstatus = true;
      cout << "Camera Recording ON: " << endl;
   }
};
class SmartPlug : public Device
{
   int powerconsumption;
   double timersetting;

public:
   SmartPlug(string name, int id, bool status, string location, int power, double timer) : Device(name, id, status, location), powerconsumption(power), timersetting(timer) {}

   void setturnoff()
   {
      status = false;
      cout << "Turn off Smart Plug: " << endl;
   }
};
int main()
{
   Device *d;
   Light l("Light", 100, true, "Forum-Mall", "High", "Green");
   Thermostat t("Thermostat", 600, true, "Forum-Mall", 300, "Cooler", 400);
   SecurityCamera s("Camera", 200, true, "Forum-Mall", "1097x1088", true, true);
   SmartPlug sp("Smart-Plug", 400, true, "Forum-Mall", 900, 23.098);
   cout << "Light Details: " << endl;
   d = &l;
   d->displayinfo();
   cout << endl
        << "Temprature Details: " << endl;
   d = &t;
   d->getstatus();

   cout << endl
        << "Camera Details: " << endl;
   d = &s;
   d->setturnon();

   cout << endl
        << "Smart Plug Details: " << endl;
   d = &sp;
   d->setturnoff();
   return 0;
}