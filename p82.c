#include<stdio.h>

int fib(int n)
{
    if(n<=0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    int ans = fib(n-1) + fib(n-2);
    return ans;

}
int main()
{
    int n;
    printf("Enter the num\n");
    scanf("%d",&n);
    int i;
    for(i=0;i<=n;i++)
    {
        int ans = fib(i);

        printf("%d fib term is %d\n",i,ans);
    }

    return 0;
}