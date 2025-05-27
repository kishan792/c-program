//with returntype without argument
//WAP to calculate area of rectangle

#include<stdio.h>
int calcArea();

int calcArea()
{
    int bre;
    int len;
    int area;

    printf("Enter the len\n");
    scanf("%d",&len);
    printf("Enter the bre\n");
    scanf("%d",&bre);

    area = len * bre;

    return area;
}

void main()
{
  int a = calcArea();  
  printf("Area of rectange : %d\n",a);
}