//binary operator -> minumum 2 operads are required....
//WAp to take input of two num from user and add them..
/*WAp to take input of two num from user and sub them..
WAp to take input of two num from user and mul them..
WAp to take input of two num from user and div them and print quo..
WAp to take input of two num from user and div them and print rem..*/

#include<stdio.h>
void main()
{
    //variable declare
    int a;
    int b;
    int ans;
  
    printf("Enter the value of a\n");
    scanf("%d",&a);

    printf("Enter the value of b\n");
    scanf("%d",&b);

    ans = a%b;

    printf("Addition of %d div %d = %d\n",a,b,ans);
    
}