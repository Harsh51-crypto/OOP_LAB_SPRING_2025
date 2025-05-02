#include <iostream>
#include <fstream>
class FileHandler{
fstream file;
public:
FileHandler(string name):file(name,ios::in|ios::out){
   if(!file.is_open()){
      cerr<<"File Not Loaded! "<<endl;
      exit(1);
   }

}

void readfile(){
   if(file.is_open()){
      string line;
      while(getline(file,line)){
         cout<<line<<endl;
      }
   }
}

~FileHandler(){
   if(file.is_open()){
      file.close();
   }
}

};
using namespace std;
int main()
{
   FileHandler file("Vehicle.txt");



}
