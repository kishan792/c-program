//with return with argument...

#include<stdio.h>

float calcArea(int,int);

float calcArea(int b,int h)
{
    float area = 0.5 * b * h;

    return area;
}

int main()
{
    int b;
    int h;

    printf("Enter the base\n");
    scanf("%d",&b);

    printf("Enter the h\n");
    scanf("%d",&h);

    float area = calcArea(b,h);
    printf("Area of triangle = %f\n",area);

    return 0;
}