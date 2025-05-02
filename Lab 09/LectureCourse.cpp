#include <iostream>
#include <LectureCourse.h>

LectureCourse::LectureCourse(std::string coursecode, int credits, double grade, double marks) : Course(coursecode, credits), grade(0.0), marks(marks) {}

void LectureCourse::display()
{
   std::cout << "COURSE CODE: " << coursecode << std::endl;
   std::cout << "Credit Hours: " << credits << std::endl;
   std::cout << "Grade: " << grade << std::endl;
}

void LectureCourse::calculategrade()
{
   if (marks <= 100)
   {
      if (marks >= 86 and marks <= 100)
      {
         grade = 4.00;
      }
      else if (marks >= 82 && marks < 86)
      {
         grade = 3.67;
      }
      else if (marks >= 74 && marks <= 78)
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