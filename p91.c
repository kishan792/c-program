#include<stdio.h>
void reverseArray(int arr[],int size)
{
    int s = 0;
    int e = size-1;

    while(s<=e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;

        s++;
        e--;
    }
}
int main()
{
    int arr[8] = {7,3,18,23,17,19,26,21};
    int size = 8;


    int i;

    printf("Array before Reverse\n");
    for(i = 0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

   reverseArray(arr,size);

   printf("Array after Reverse\n");
    for(i = 0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

}