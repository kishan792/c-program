//Uniary operator -> minimum one operands
#include<stdio.h>
void main()
{
    int a = 10;
    int e = 10;
    int b = -a;//uniary minus
    printf("Value of b : %d\n",b);

    //post increment operator;
    int c = a++;
    printf("Value of c : %d\n",c);
    printf("Value of a : %d\n",a);

    //pre decrement operator;
    int d = --e;
    printf("Value of d : %d\n",d);
    printf("Value of e : %d\n",e);

}
