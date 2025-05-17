#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the num\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            //row is odd
            for(j=1;j<=n;j++)
            {
                printf("%d",j);
            }
        }
        else
        {
            //row is even
            for(j=n;j>=1;j--)
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }
}