//WAp to find a target value using Linear search

#include<stdio.h>
 int linearSeacrh(int arr[][4],int r,int c, int target)
 {
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]==target)
            {
                return 1;
            }
        }
    }
    return 0;
 }

int main()
{
   int arr[4][4] = {{7,8,6,3},{2,1,4,9},{5,3,7,6},{3,8,4,9}};
    int r = 4;
    int c = 4;

    int target;
    printf("Enter the target\n");
    scanf("%d",&target);

    int ans = linearSeacrh(arr,r,c,target); 

    if(ans == 1)
    {
        printf("target Found\n");
    }
    else{
        printf("target not found\n");
    }
}