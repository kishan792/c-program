////Return a array from a function........

#include<stdio.h>
 int* linearSeacrh(int arr[][4],int r,int c, int target,int ans[])
 {
    int i,j;
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]==target)
            {
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }
    return ans;
 }

int main()
{
   int arr[4][4] = {{7,8,6,3},{2,1,4,9},{5,3,7,16},{3,8,4,9}};
    int r = 4;
    int c = 4;
    int ans[2] = {-1,-1};

    int target;
    printf("Enter the target\n");
    scanf("%d",&target);

    int *ptr =  linearSeacrh(arr,r,c,target,ans);

    if(*ptr == -1)
    {
        printf("Element not found\n");
    } 
    else{
        printf("Element found %d row & %d col\n",*ptr,*(ptr+1));
    }

    
}