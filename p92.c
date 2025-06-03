#include<stdio.h>
int checkPallindrome(int arr[],int size)
{
    int s = 0;
    int e = size-1;

    while(s<=e)
    {
        if(arr[s]!=arr[e])
        {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}

int main()
{
    // int arr[6] = {21,24,23,23,24,21};
    // int size = 6;

    int arr[8] = {7,3,18,23,17,19,26,21};
    int size = 8;

    int ans = checkPallindrome(arr,size);

    if(ans==0)
    {
        printf("Array is not a pallindrome\n");
    }
    else{
        printf("Array is a pallindrome\n");
    }
}