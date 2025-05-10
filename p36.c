//prime Num factor
#include<stdio.h>
void main()
{
    int num;
    printf("Enter the num\n");
    scanf("%d",&num); //6
    int count = 0;
    int i;
    
    for(i = 1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d is prime\n",num);
    }
    else
    {
        printf("%d is composite\n",num);
    }
}