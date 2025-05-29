//call by refrence
#include<stdio.h>

void swap(int* ,int*);

void swap(int *a,int *b)
{
    int c = *a;
    *a = *b;
    *b = c;

    printf("Value of a in swap function : %d\n",*a);
    printf("Value of b in swap function : %d\n",*b);
}


int main()
{
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);

    printf("Enter the value of b\n");
    scanf("%d",&b);

    printf("Value of a in main function: %d\n",a);
    printf("Value of b in main function: %d\n",b);

    swap(&a,&b);
    
    printf("Value of a in main function: %d\n",a);
    printf("Value of b in main function: %d\n",b);
}