//Constants -> are the value that are not changed throughout the program..
//How to create a constant variable --> 
//1st way -> using const keyword
//2d way using preprocessor -> #define
#include<stdio.h>
#define pi 3.1416
void main()
{
    int rad;
    float area;
    //const float pi = 3.1416;

    printf("Enter the value of rad\n");
    scanf("%d",&rad);


    area = pi*rad*rad;

    printf("Area of circle = %f\n",area);

}