//Runtime intialization of 2d array
//access 2 d array --> arrayname[rowIndex][colIndex];
#include<stdio.h>
int main()
{
    int arr[3][4];

    //intliatization of array using nested loop
    //row wise input
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Enter the value of %d row %d col\n",i,j);
            scanf("%d",&arr[i][j]);
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

    printf("Printing array values in col wise manner\n");

    for(i=0;i<4;i++)
    {
        for(int j = 0;j<3;j++)
        {
            printf("%d\t",arr[j][i]);
        }

        printf("\n");
    }
}