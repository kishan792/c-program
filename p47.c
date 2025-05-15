/*
    goto ->transfer the control to the given level whenever the specified condition goes true


*/

#include<stdio.h>
void main()
{


    int i;


    for(i = 1;i<=10;i++)
    {
        printf("value of i -> %d\n",i);
        if(i==5)
        {
            printf("Going to the label -> abc\n");
            goto abc;
        }
    }

    abc:
        printf("I am inside label ABC\n");
}