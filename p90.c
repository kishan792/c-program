#include<stdio.h>
int findMax(int arr[],int size)
{
    int i;
    int max = 0;
    for(i=1;i<size;i++)
    {
        if(arr[i]>arr[max])
        {
            max = i;
        }
    }
    return max;
}

int main()
{
    int arr[8] = {7,3,18,23,17,19,26,21};
    int size = 8;

    int index = findMax(arr,size);

    printf("Max value %d is at %d index\n",arr[index],index);
}