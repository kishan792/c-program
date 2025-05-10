#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value\n");
    scanf("%d",&n);

    int i;
    int evenSum = 0;
    int oddSum = 0;
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            evenSum = evenSum + i;
        }
        else{
          oddSum = oddSum +i;  
        }
       
    }
    printf("Total Even sum = %d\n",evenSum);
    printf("Total odd sum = %d\n",oddSum);
}