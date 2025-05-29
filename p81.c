//WAp to print factorial og given no using recursion.
#include<stdio.h>
int fact(int n)//4
{
    if(n==1)
    {
        return 1;
    }

    int ans = n * fact(n-1);
    return ans;
}

int main()
{
    int n;
    printf("Enter the num\n");
    scanf("%d",&n);

    int res = fact(n);

    printf("factorial of %d is %d\n",n,res);
}   