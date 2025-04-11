#include "iostream"
using namespace std;
class Ticket
{
protected:
   const int ticketid;
   string passengername;
   double price;
   string date;
   string destination;

public:
   Ticket(int id, string name, double price, string date, string destination) : ticketid(id), passengername(name), price(price), date(date), destination(destination) {}

   virtual void reserve()
   {
      cout << "Ticket Has been Reserved: " << endl;
   }
   virtual void cancel()
   {
      cout << "Ticket Canceled: " << endl;
   }
   virtual void display()
   {
      cout << "Ticket ID: " << ticketid << endl;
      cout << "Passenger Name: " << passengername << endl;
      cout << "Price: " << price << endl;
      cout << "Date: " << date << endl;
      cout << "Destination: " << destination << endl;
   }
};
class FlightTicket : public Ticket
{
   string airlanename;
   const int flightnumber;
   string seatclass;

public:
   FlightTicket(int id, string name, double price, string date, string destination, string airline, int flightnumber, string seat) : Ticket(id, name, price, date, destination), airlanename(airline), flightnumber(flightnumber), seatclass(seat) {}

   void display()
   {
      cout << "Airline: " << airlanename << endl;
      cout << "FlightNumber: " << flightnumber << endl;
      cout << "Seat Class: " << seatclass << endl;
   }
};
class TrainTicket : public Ticket
{
   const int trainnumber;
   string coachtype;
   string departuretime;

public:
   TrainTicket(int id, string name, double price, string date, string destination, int trainnum, string coach, string time) : Ticket(id, name, price, date, destination), trainnumber(trainnum), coachtype(coach), departuretime(time) {}

   void reserve()
   {
      cout << "Ticket Reserved Of train of Auto Assign Seat: " << endl;
   }
};
class BusTicket : public Ticket
{
   string buscompany;
   int seatnumber;

public:
   BusTicket(int id, string name, double price, string date, string destination, string buscompany, int num) : Ticket(id, name, price, date, destination), buscompany(buscompany), seatnumber(num) {}

   void cancel()
   {
      cout << "Allow Only Last Minute Refunds: " << endl;
   }
};
class ConcertTicket : public Ticket
{
   string artistname;
   string veune;
   string seattype;

public:
   ConcertTicket(int id, string name, double price, string date, string destination, string artist, string veune, string type) : Ticket(id, name, price, date, destination), artistname(artist), veune(veune), seattype(type) {}

   void display()
   {
      cout << "Artist: " << artistname << endl;
      cout << "Veune: " << veune << endl;
      cout << "Seat Type: " << seattype << endl;
   }
};
int main()
{
   Ticket *t;
   FlightTicket f(100, "Harsh", 90000, "24/09/25", "Lahore", "PIA", 255, "Business");
   TrainTicket train(201, "Sandesh", 3000, "24/09/25", "Karachi", 900, "Sukker_Express", "9.00PM");
   BusTicket b(202, "Talha", 5000, "26/09/25", "Kashmore", "Youtung", 700);
   ConcertTicket c(203, "Luckey", 7000, "17/06/25", "Karachi", "TALHA-Anjum", "FAST_NUCES", "Front");

   t = &f;
   t->display();
   cout << endl
        << endl;

   t = &train;
   t->reserve();
   cout << endl
        << endl;
   t = &b;
   cout << "Train Details: " << endl;
   t->cancel();
   cout << endl
        << endl;
   t = &c;
   t->display();

   return 0;
}
