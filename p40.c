//Wap to count the number digint in given no.


#include<stdio.h>
void main()
{
    int num;
    printf("Enter the num\n");
    scanf("%d",&num);

    int count = 0;
    while(num>0)
    {
        num = num/10;
        count++;
    }

    printf("Total no of digits : %d\n",count);
    
}