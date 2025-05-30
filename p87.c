#include<stdio.h>
int main()
{
    int arr[5] = {12,10,11,13,15};

    int sum = 0;
    int i;
    for(i=0;i<5;i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum : %d\n",sum);
}
