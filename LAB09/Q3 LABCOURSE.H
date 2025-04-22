#ifndef LLABCOURSE_H
#pragma LABCOURSE_H
#include<Course.h>

class LabCourse:public Course{
private:
double marks;
double grade;
public:
LabCourse(std::string coursecode,int credits,double grade,double marks);

void display();
void calculategrade();

};




#endif
