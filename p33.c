//Sum of n natural no....
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    int i;
    int sum = 1;
    for(i = 1;i <= n;i++)
    {
        sum = sum + i;
    }
    printf("Sum : %d\n",sum);
}