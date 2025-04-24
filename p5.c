//how to take input from user using scanf
#include<stdio.h>
void main()
{
    int age;
    float per;
    char gen;

    printf("Enter the age\n");
    scanf("%d",&age);

    printf("Enter your percentage\n");
    scanf("%f",&per);

    printf("Enter your gen\n");
    scanf(" %c",&gen);

    printf("User age : %d\n",age);
    printf("My per is : %f\n",per);
    printf("My gen is : %c\n",gen);

   
}