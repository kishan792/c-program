#include<stdio.h>

int checkPrime(int n)
{
    int i;
    int count= 0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        return 1;
    }
    return 0;
}

void printPrime(int range)
{
    int i;
    for(i=1;i<=range;i++)
    {
         int ans = checkPrime(i);

        if(ans == 1)
        {
            printf("%d is a prime no\n",i);
        }
    }
}

int main()
{
    int range;
    printf("Enter the num\n");
    scanf("%d",&range);
    
    printPrime(range);
}