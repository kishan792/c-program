//arthmatic operation on pointers

#include<stdio.h>
void main()
{
     int x = 10;
     int *ptr = &x;

    printf("Adress of x : %d\n",&x);
    printf("value of ptr : %d\n",ptr); // to observe the changes we use %u to print address

    ptr = ptr + 1; //it will increment 4 byte as ptr store address of int type...

    printf("value of ptr : %d\n",ptr);
    
}