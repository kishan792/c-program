//Check armstrong number or not....

#include<stdio.h>
#include<math.h>
void main()
{
    int num;
    printf("Enter the num\n");
    scanf("%d",&num);

    int copy = num;

    int sum = 0;
    int rem;
    int count = 0;
    //count of digit
    while(copy>0)
    {
        copy = copy/10;
        count++;
    }

    copy = num;

    while(copy>0)
    {
        rem = copy%10;
        sum = sum + pow(rem,count);
        copy = copy/10;
    }

    if(sum==num)
    {
        printf("%d is a armstrong\n",num);
    }
    else
    {
        printf("%d is not a armstrong\n",num);
    }
}