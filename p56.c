#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter the value of n\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            //to ptint stars...
            printf("*");
        }
        printf("\n");
    }

    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}