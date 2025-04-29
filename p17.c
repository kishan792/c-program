//To check no is even or odd
#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("%d is even\n",num);
    }
    else
    {
        printf("%d is odd\n",num);
    }
}