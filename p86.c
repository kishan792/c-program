#include<stdio.h>
int main()
{
    int marks[5];
    int i;
    //Run time input

    for(i=0;i<5;i++)
    {
        printf("Enter the value of %d index\n",i);
        scanf("%d",&marks[i]);
    }
    

    
    for(i=0;i<5;i++)
    {
        printf("%d\t",marks[i]);
    }

    printf("\n");

    return 0;
}