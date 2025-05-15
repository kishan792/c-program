//Nested loop
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        printf("outer Task --> %d\n",i);
        for(j=1;j<=5;j++)
        {
            printf("        inner Task --> %d\n",j);
        }
    }
}