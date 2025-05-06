//Switch case to print week day on basis of numbers...
//imp -> if break statement is missing then all the statement will work once the case is true untill it find a break statement....

#include<stdio.h>
void main()
{
    int num;
    printf("Enter the num b/w 1 - 7\n");
    scanf("%d",&num);

    switch(num)
    {
        case 1:
            printf("Monday\n");
        break;

        case 2:
            printf("Tuesday\n");
        break;

        case 3:
            printf("Wedneday\n");
        break;

        case 4:
            printf("thursday\n");
        break;

        case 5:
            printf("friday\n");
        break;

        case 6:
            printf("Saturday\n");
        break;

        case 7:
            printf("Sunday\n");
        break;

        default:
            printf("Invalid Input\n");
        break;
    }
}