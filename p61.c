#include<stdio.h>
void main()
{
    int n;
    int i;
    int j;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if( i==n/2 || j==n/2 || (i==1 && j>=n/2) || (j==n && i>=n/2) || (i==n && j<=n/2) || (j==1 && i<=n/2))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}