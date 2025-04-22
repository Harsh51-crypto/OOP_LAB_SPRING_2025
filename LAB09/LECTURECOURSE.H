#ifndef lECTURECOURSE_H
#pragma LECTURECOURSE_H
#include<Course.h>


class LectureCourse:public Course{
   double grade;
   double marks;
   public:
   LectureCourse(std::string coursecode,int credits,double grade,double marks);



void display();
void calculategrade();
};


#endif
