#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value whose table you want to see\n");
    scanf("%d",&n);
    
   int i;
   for(i=1;i<=10;i++)
   {
        int ans = n * i;
        printf("%d * %d = %d\n",n,i,ans);
   }
   

}