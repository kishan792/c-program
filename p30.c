//For Loop -> Entery control loop -> condition is checked at starting of loop
/*
    for(intilization;condition;updation)
    {
        //body of loop
    }
*/
//WAP to print name n time...
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    printf("Before Loop\n");
   int i;
   for(i=1;i<=n;i++)
   {
    printf("Kishan\n");
   }
     printf("After Loop\n");

}