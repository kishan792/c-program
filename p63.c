//arthmatic operation on pointers

#include<stdio.h>
void main()
{
    char x = 'a';
    char *ptr = &x;

    printf("Adress of x : %u\n",&x);
    printf("value of ptr : %u\n",ptr);

    ptr = ptr + 1; //it will increment 1 byte as ptr store address of char type...

    printf("value of ptr : %u\n",ptr);
    
}