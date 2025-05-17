//break _. break statement will help to terminate the loop whenever the specified condition is true

#include<stdio.h>
void main()
{
    int i;//me
    for(i=1;i<=100;i++)
    {
        if(i==20)
        {
            printf("loop termiante at specifed condition\n");
            break;
        }

        printf(" Value of i : %d\n",i);
    }
}