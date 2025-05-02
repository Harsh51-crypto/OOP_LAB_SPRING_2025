#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
class FileHandler
{
   fstream file;

public:
   FileHandler(string name) : file(name, ios::in | ios::out)
   {
      if (!file.is_open())
      {
         cerr << "File Not Loaded! " << endl;
         exit(1);
      }
   }

   void writefile(string data)
   {
      if (file.is_open())
      {
         file << data << endl;
      }
      else
      {
         cout << "File Not Opened! " << endl;
      }
   }

   void readfile()
   {
      if (file.is_open())
      {
         cout << "Car Details! " << endl;
         string line;
         string type;
         int id;
         string name;
         int year;

         while (getline(file, line))
         {
            istringstream iss(line);
            iss >> type >> id >> name >> year;
            cout << "Type: " << type << ",ID: " << id << " ,Name: " << name << ",Year: " << year << endl;
         }
      }
   }

   ~FileHandler()
   {
      if (file.is_open())
      {
         file.close();
      }
   }
};
using namespace std;
int main()
{
   FileHandler file("Vehicle.txt");
   string data = "Sport 100 civic 1999";
   // file.writefile(data);
   file.readfile();
}
