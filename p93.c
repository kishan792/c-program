#include<stdio.h>
void selectionSort(int arr[],int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        int min = i;
        for(j=i+1;j<size;j++)
        {
            //to find the index of minimum element..
            if(arr[j]>arr[min])
            {
                min = j;
            }
        }
        //swap it to correct postion
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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

    selectionSort(arr,size);

    printf("Array after sort\n");
    for(i=0;i<size;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");

}