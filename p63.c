//arthmatic operation on pointers

#include<stdio.h>
void main()
{
    char x = 'a';
    char *ptr = &x;

    printf("Adress of x : %u\n",&x);
    printf("value of ptr : %u\n",ptr);

    ptr = ptr + 1;

    printf("value of ptr : %u\n",ptr);
    
}