//pointers on structure

#include<stdio.h>
struct Employee
{
    int age;
    int sal;
    char gen;
};

int main()
{
    //int x = 10;
    //int *ptr = &x;

    struct Employee e1 = {24,100,'M'};
    
    struct Employee *ptr = &e1;

    //Access the element using e1...
    //using (.) operator

    printf("Access element using a normal variable e1....\n");
    printf("age of emp1 : %d\n",e1.age);
    printf("sal of emp1 : %d\n",e1.sal);
    printf("gen of emp1 : %c\n",e1.gen);  

    //Access the data memebers using a pointer variable
    //the use (->) arrow operator

    printf("\n\nAccess element using a pointer variable ptr....\n");
    printf("Age of emp1 : %d\n",ptr->age);
    printf("Sal of emp1 : %d\n",ptr->sal);
    printf("Gen of emp1 : %c\n",ptr->gen);


}