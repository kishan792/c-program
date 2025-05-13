//Pasword replication

#include<stdio.h>
void main()
{
    int password = 12345;

    int pass;
    printf("Welcome to instgram\n");
    printf("Enter your correct password\n");
    scanf("%d",&pass);


    while(pass!=password)
    {
        printf("Enter your correct password\n");
        scanf("%d",&pass);
    }

    printf("Welcome Kishan to your account\n");

}