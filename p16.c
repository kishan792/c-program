//simple if...
#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);

    printf("Inside of main function\n");

    if(num<=10)
    {
        //body of if
        printf("Inside of if block\n");
        printf("Number is smaller than 10\n");
    }
    else{
        printf("Inside of else block\n");
        printf("Number is greater than 10\n");
    }

    printf("Inside of main function\n");
}