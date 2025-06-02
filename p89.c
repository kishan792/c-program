//Linear Search in a array

#include<stdio.h>

int binarySearch(int arr[],int size,int target)
{
    int s = 0;
    int e = size-1;

    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(arr[mid]<target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}


int main()
{
    int arr[14] = {23,28,31,35,46,63,87,93,97,99,112,115,120,123};
    int size = 14;

    int target;
    printf("Enter the target\n");
    scanf("%d",&target);

    int index = binarySearch(arr,size,target);
    if(index==-1)
    {
        printf("Element not found\n");
    }
    else{
        printf("Element found on %d index\n",index);
    }
}