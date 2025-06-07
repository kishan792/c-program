//Run time intializtion of string
#include<stdio.h>
int main()
{
    char name[50];


    //using scanf();
    //scanf not taking input after a space -> whenever it see a space it stop taking a input. 
    //scanf doesnot check the array bound..
    //  printf("Enter your name\n");
    // scanf("%s",name);


    //using gets()
    // scanf doesnot check the array bound..
    // printf("Enter your name\n");
    // gets(name);
   


   //using fgets
    printf("Enter your name\n");
    fgets(name,50,stdin);
    printf("Hello, %s\n",name);

    return 0;
}