//Area of triangle
#include<stdio.h>
void main()
{
    int base;
    int height;
    float area;

    printf("Enter the value of base\n");
    scanf("%d",&base);

    printf("Enter the value of height\n");
    scanf("%d",&height);

    area = 0.5*base*height;

    printf("Area of triangle = %g\n",area);

}