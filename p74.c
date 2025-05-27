#include<stdio.h>

   int calcPower(int ,int);

   int calcPower(int b,int p)
   {
    int i;
    int ans = 1;
    for(i=1;i<=p;i++)
    {
        ans = ans * b;
    }

    return ans;
   }

 int main()
 {
    int b;
    int p;

    printf("Enter the base\n");
    scanf("%d",&b);

    printf("Enter the power\n");
    scanf("%d",&p);
   int ans = calcPower(b,p);
   printf("Ans : %d\n",ans);

   return 0;
 }