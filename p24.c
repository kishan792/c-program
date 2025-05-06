#include<stdio.h>
void main()
{
    int num;
    printf("Enter the num\n");
    scanf("%d",&num);

    if(num==1)
    {
        printf("Monday\n");
    }
    else if(num==2)
    {
       printf("tuesday\n"); 
    }
    else if(num==3)
    {
       printf("wednesday\n"); 
    }
    else if(num==4)
    {
       printf("thursday\n"); 
    }
    else if(num==5)
    {
       printf("friday\n"); 
    }
    else if(num==6)
    {
       printf("saturday\n"); 
    }
    else if(num==7)
    {
       printf("sunday\n"); 
    }
    else{
        printf("Invalid input\n");
    }
}