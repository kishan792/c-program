#include<stdio.h>

//function declation --> returnType functionName(argument);
void KishanBday();

//function defination : -
/*
    returnTyoe functionName(argument)
    {
        //body of main function
    }
*/

void KishanBday()
{
    printf("Happy bday kishan\n");
}

void main()
{
    printf("I am in main function \n");
    //fucntion calling --> functionName();
    KishanBday();

    printf("I am in main function \n");
    KishanBday();

    printf("I am in main function \n");
}