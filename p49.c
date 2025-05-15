//check prime or not -> 2nd way

#include<stdio.h>
void main()
{
    int num;
    printf("Enter the num\n");
    scanf("%d",&num);
    int i;
    int count = 0;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        printf("%d is a prime no.\n",num);
    }
    else{
        printf("%d is not a prime no.\n",num);
    }
}