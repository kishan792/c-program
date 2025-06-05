#include<stdio.h>

void calcSum(int arr[][4],int r,int c)
{
    
    int i,j;

    for(i=0;i<r;i++)
    {
        int sum = 0;
        for(j=0;j<c;j++)
        {
            sum = sum + arr[i][j];
        }
        printf("sum of %d row : %d\n",i,sum);
    }

  
}
int main()
{
    int arr[4][4] = {{7,8,6,3},{2,1,4,9},{5,3,7,6},{3,8,4,9}};
    int r = 4;
    int c = 4;


    calcSum(arr,r,c);
    
    
}