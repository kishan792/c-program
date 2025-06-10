//structure is a user defined datatype..
#include<stdio.h>
struct Student
{
    //datamembers
    int age;
    int rollNo;
    char gen;
};


int main()
{
    int x = 10;

    struct Student stu1 = {23,43,'M'};

    //access the datamemebers --> using .operator  variableName.dataMember

    printf("age of student 1 : %d\n",stu1.age);
    printf("Roll No of student 1 : %d\n",stu1.rollNo);
    printf("gen of student 1 : %c\n",stu1.gen);



    return 0;
}