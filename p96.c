//2d array
#include<stdio.h>
int main()
{
    //datatype arrayName[rowsize][colSize];

    int arr[3][4] = {{12,18,7,9},{15,16,6,3},{9,5,4,7}};

    //Printing of 2d array using nested loop

    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}