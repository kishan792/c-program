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
            if(j==1 || j==n || (i==j && i<=n/2))
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