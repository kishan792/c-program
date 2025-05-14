/*
    WAP to take input of x and y and caculate x ^ y
*/

#include<stdio.h>
void main()
{
    int x,y;

    printf("Enter the value of x\n");
    scanf("%d",&x);

    printf("Enter the value of y\n");
    scanf("%d",&y);
    int i;
    int ans = 1;

    for(i = 1;i<=y;i++)
    {
        ans = ans * x;
    }

    printf("Ans =  : %d\n",ans);

}