#include<stdio.h>
void main()
{
    int i;
    int j;
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
   
    //ulta pattern
    for(i=n;i>=1;i--)
    {
        //space code
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        //star code
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }

     //sidha pattern
    for(i=2;i<=n;i++)
    {
        //space code
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        //star code
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}