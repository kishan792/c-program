#include<stdio.h>
void main()
{
    int per;
    printf("Enter the value of per\n");
    scanf("%d",&per);

    if(per>=90)
    {
        printf("You got Grade A\n");
    }
    else if(per>=80 && per <90)
    {
       printf("You got Grade B\n"); 
    }
    else if(per>=70 && per <80)
    {
       printf("You got Grade C\n"); 
    }
    else if(per>=60 && per <70)
    {
       printf("You got Grade D\n"); 
    }
    else if(per>=40 && per <60)
    {
       printf("You got Grade E\n"); 
    }
    else
    {
        printf("You are fail\n");
    }