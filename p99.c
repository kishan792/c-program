#include<stdio.h>

int calcSum(int arr[][4],int r,int c)
{
    int sum = 0;
    int i,j;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum = sum + arr[i][j];
        }
    }

    return sum;
}
int main()
{
    int arr[4][4] = {{7,8,6,3},{2,1,4,9},{5,3,7,6},{3,8,4,9}};
    int r = 4;
    int c = 4;


    int ans = calcSum(arr,r,c);
    
    printf("Sum of 2d array : %d\n",ans);
}