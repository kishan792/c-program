#include<stdio.h>
int main()
{
    int arr[3][4];

    //col wise input

    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the value %d row and %d col\n",j,i);
            scanf("%d",&arr[j][i]);
        }
    }

    printf("Printing array values in row wise manner\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}