#include<stdio.h>
struct Employee
{
    int age;
    int sal;
    char gen;
};

int main()
{
    struct Employee e1;

    printf("Enter the age of emp 1\n");
    scanf("%d",&e1.age);

    printf("Enter the gen of emp 1\n");
    scanf(" %c",&e1.gen);

    printf("Enter the sal of emp 1\n");
    scanf("%d",&e1.sal);

    struct Employee e2;

    printf("Enter the age of emp 2\n");
    scanf("%d",&e2.age);

    printf("Enter the gen of emp 2\n");
    scanf(" %c",&e2.gen);

    printf("Enter the sal of emp 2\n");
    scanf("%d",&e2.sal);


    //Printing the imformation

    printf("Age of emp1 : %d\n",e1.age);
    printf("Sal of emp1 : %d\n",e1.sal);
    printf("gen of emp1 : %c\n",e1.gen);

    printf("\n\n");

    printf("Age of emp2 : %d\n",e2.age);
    printf("Sal of emp2 : %d\n",e2.sal);
    printf("gen of emp2 : %c\n",e2.gen);


}