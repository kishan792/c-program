//Write a program to sort an array in acc order using bubble sort....
#include<stdio.h>
void bubbleSort(int arr[],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    int arr[7] = {7,8,5,12,19,13,15};
    int size = 7;
    int i;

    printf("Array before sort\n");
    for(i=0;i<size;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");

    bubbleSort(arr,size);

    printf("Array after sort\n");
    for(i=0;i<size;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");

    return 0;

}