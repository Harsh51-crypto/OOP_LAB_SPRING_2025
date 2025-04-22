#include<iostream>
#include<Labcourse.h>

LabCourse::LabCourse(std::string coursecode,int credits,double marks,double grade):Course(coursecode,credits),marks(marks),grade(0.0){}

void LabCourse:: display(){
   std::cout<<"Course Code: "<<coursecode<<std::endl;
   std::cout<<"Credits: "<<credits<<std::endl;
   std::cout<<"Grade: "<<grade<<std::endl;
}

void LabCourse::calculategrade()
{
   if (marks <= 100)
   {
      if (marks >= 80 and marks <= 100)
      {
         grade = 4.00;
      }
      else if (marks >= 70 && marks < 80)
      {
         grade = 3.67;
      }
      else if (marks >= 60 && marks < 70)
      {
         grade = 3.00;
      }
      else
      {
         grade = 2.00;
      }
   }
   else
   {
      std::cout << "Invalid Input: " << std::endl;
   }
}
