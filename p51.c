#include<stdio.h>
#include<math.h>
void main()
{

    int num;
    int range;
    printf("Enter the range\n");
    scanf("%d",&range);
    for(num=1;num<=range;num++)
    {
        int copy = num;
        int sum = 0;
        int count = 0;
        while(copy>0)
        {
            copy = copy/10;
            count++;
        }

        copy = num;
        while(copy>0)
        {
            int rem = copy%10;
            sum = sum + pow(rem,count);
            copy = copy/10;
        }

        if(num==sum)
        {
            printf("%d is a armstrong\n",num);
        }
    }

}