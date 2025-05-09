#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value\n");
    scanf("%d",&n);

    int i;
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%dis a even\n",i);
        }
       
    }
}