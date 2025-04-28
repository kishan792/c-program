#include<stdio.h>
void main()
{
    int age1;
    int age2;

    printf("Enter the age of person 1 \n");
    scanf("%d",&age1);

    printf("Enter the age of person 2 \n");
    scanf("%d",&age2);

    age1>age2 ?printf("Person 1 is older\n") : printf("Person 2 is older\n");
}