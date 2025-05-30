#include<stdio.h>
int main()
{
    int marks[5];

    //Run time input
    printf("Enter the value of o index\n");
    scanf("%d",&marks[0]);

    printf("Enter the value of 1 index\n");
    scanf("%d",&marks[1]);

    printf("Enter the value of 2 index\n");
    scanf("%d",&marks[2]);

    printf("Enter the value of 3 index\n");
    scanf("%d",&marks[3]);

    printf("Enter the value of 4 index\n");
    scanf("%d",&marks[4]);

    int i;
    for(i=0;i<5;i++)
    {
        printf("%d\t",marks[i]);
    }

    printf("\n");

    return 0;
}