#include <iostream>
#include <LabCourse.h>
#include <LectureCourse.h>
int main()
{
   Course *c;
   c = new LabCourse("MT100", 3, 0.0, 90);
   c->calculategrade();
   c->display();

   c=new LectureCourse("MT101",3,0.0,92);
   c->calculategrade();
   c->display();
   
}

