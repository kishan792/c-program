//Pasword replication

#include<stdio.h>
void main()
{
    int password = 12345;

    int pass;
    printf("Welcome to instgram\n");
    
    do{
        printf("Enter your correct password\n");
        scanf("%d",&pass);
    }
    while(pass!=password);

    printf("Welcome Kishan to your account\n");

}