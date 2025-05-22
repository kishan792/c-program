//pointer ->speacial variable that store address of another variable...

#include<stdio.h>
void main()
{
    //normal variable
    int x = 10;
    //pointer
    int *ptr = &x;

    //double pointer
    int **pt = &ptr;


    printf("Value of x : %d\n",x);
    printf("Address of x : %p\n",&x);

    printf("Value of ptr : %p\n",ptr);
    printf("Address of ptr : %p\n",&ptr);

    //print value of x --> with help of ptr....
    printf("value of x with help of ptr : %d\n",*ptr);

    //changes on x with help of ptr...

    *ptr = 20;

    printf("Value of x : %d\n",x);

    printf("Value of pt : %p\n",pt);
    printf("Adress of pt : %p\n",&pt);

    printf("value of x using pt : %d\n",**pt);

    **pt = 30;

    printf("Value of x : %d\n",x);


}