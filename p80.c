#include<stdio.h>
void show(int n)
{
    if(n==0)
    {
        return;
    }

    show(n-1);
    
    printf("%d\n",n);
    
}
int main()
{
    printf("I am in main function\n");
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    show(n);

    printf("I am in main function\n");
}