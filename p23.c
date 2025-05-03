#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value of a\n");
    scanf("%d",&a);

    printf("Enter the value of b\n");
    scanf("%d",&b);

    printf("Enter the value of c\n");
    scanf("%d",&c);

    if(a>b)
    {
     if(a>c)
     {
        printf("A is greater\n");
     }   
    }

    if(b>a)
    {
     if(b>c)
     {
        printf("B is greater\n");
     }   
    }

    if(c>b)
    {
     if(c>a)
     {
        printf("C is greater\n");
     }   
    }
}