#ifndef COURSE_H
#pragma COURSE_H

#include<iostream>
class Course{
   protected:
   std::string coursecode;
   int credits;
   public:
   Course(std::string coursecode,int creadits ){}

   virtual void calculategrade()=0;
   virtual void display()=0;

};

#endif
