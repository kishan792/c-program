/*
    *


*/
#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(i=n;i<=n;i++)
    {
        //codefor printing space
        for(j = 1;j<=n-i;j++)
        {
            printf(" ");
        }

        //code for printing stars

        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

}