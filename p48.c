#include<stdio.h>
void main()
{
    int i = 1;

    abc:
        i++;
        printf("Kishan\n");

    if(i<=10)
    {
        goto abc;
    }
}