//union is a user defined datatype..
#include<stdio.h>
union Student
{
    //datamembers
    int age;
    int rollNo;
};


int main()
{
    union Student stu1;
    //union Student *ptr = &stu1;

    stu1.age = 25;
     stu1.rollNo = 98;
    printf("Age of student 1 is %d\n",stu1.age);
   
    printf("Roll No of student 1 is %d\n",stu1.rollNo);

    return 0;
}