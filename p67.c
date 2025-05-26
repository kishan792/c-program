//without return type without argument
//WAP to calculate area of rectangle

#include<stdio.h>
void calcArea();

void calcArea()
{
    int len,bre,area;

    printf("Enter the len\n");
    scanf("%d",&len);

    printf("Enter the bre\n");
    scanf("%d",&bre);

    area = len * bre;
    printf("Area of rectangle : %d \n",area);
}

void main()
{
    printf("Inside main function\n");
    calcArea();
    printf("Inside main function\n");
}