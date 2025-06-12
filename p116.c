#include<stdio.h>
struct Employee
{
    char name[100];
    int age;
    int sal;
};

int main()
{
    // struct Employee e1  = {"kishan",24,1000};
    // printf("Name of e1 : %s\n",e1.name);
    // printf("age of e1 : %d\n",e1.age);
    // printf("Sal of e1 : %d\n",e1.sal);

    struct Employee employeeDetail[3];

    for(int i =0;i<3;i++)
    {
        printf("Enter the name of %d employee\n",i+1);
        scanf("%s",employeeDetail[i].name);

        printf("Enter the age of %d employee\n",i+1);
        scanf("%d",&employeeDetail[i].age);

        printf("Enter the sal of %d employee\n",i+1);
        scanf("%d",&employeeDetail[i].sal);
    }

    printf("\n\n access array element\n\n");

    for(int i =0;i<3;i++)
    {
        printf(" name of %d employee :  %s\n",i+1,employeeDetail[i].name);
        printf(" age of %d employee :  %d\n",i+1,employeeDetail[i].age);
        printf(" sal of %d employee :  %d\n",i+1,employeeDetail[i].sal);
    }
}