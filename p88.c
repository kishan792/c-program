//Linear Search in a array

#include<stdio.h>

int linearSearch(int arr[],int size,int target)
{
    //Run a loop from 0 to last index
    int i;
    for(i = 0;i<size;i++)
    {
        //search for the target value

        if(arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}


int main()
{
    int arr[9] = {23,18,17,19,25,63,71,46,58};
    int size = 9;

    int target;
    printf("Enter the target\n");
    scanf("%d",&target);

    int index = linearSearch(arr,size,target);
    if(index==-1)
    {
        printf("Element not found\n");
    }
    else{
        printf("Element found on %d index\n",index);
    }
}