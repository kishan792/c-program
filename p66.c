//function is independent block of code that perform some specific task and can be used when ever called...

//function callling is imp to execute a function

//fnction declation -> when function defination is above function calling

//function defination is below function calling --> function declatrtion is important...

//returnType functionName(argument); function declartion
#include<stdio.h>

void myFun()
{
    printf("Inside my function\n");
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d\n",i);
    }
}

void printName(int n)
{
    printf("Inside print Name\n");
    int i;
    for(i=1;i<=n;i++)
    {
        printf("Kishan\n");
    }
}
    
void main()
{
    printf("Inside main function\n");
    myFun();//function calling
    printf("Back to main function\n");

    printName(8);
    
}


