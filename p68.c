//without returntype with argument
//WAP to calculate area of rectangle

#include<stdio.h>
void calcArea(int,int);

void calcArea(int len,int bre)
{
    int area;

    area = len * bre;
    printf("Area of rectangle : %d \n",area);
}

void main()
{
    printf("Inside main function\n");
    int len,bre;
    printf("Enter the len\n");
    scanf("%d",&len);

    printf("Enter the bre\n");
    scanf("%d",&bre);

    calcArea(len,bre);
    printf("Inside main function\n");

    calcArea(20,5);
}