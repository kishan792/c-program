#include<stdio.h>
int length(char name[])
{
    int i = 0;

    while(name[i]!='\0')
    {
        i++;
    }

    return i;
}
