//Fibbonacci series....
#include<stdio.h>
void main()
{
    int num;
    printf("Enter the num\n");
    scanf("%d",&num);

    int p1 = -1;
    int p2 = 1;
    int i;
    for(i = 1;i<=num;i++)
    {
        int cur = p1 + p2;
        printf("%d\t",cur);

        p1 = p2;
        p2 = cur;   
    }
}