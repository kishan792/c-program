//Logical operator -->

#include<stdio.h>
void main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    int ans;

    //logical And..
    ans = (a<b) && (b>c);
    printf("Logical And\n");
    printf("%d < %d && %d > %d = %d\n",a,b,b,c,ans);

    //logical OR..
    printf("Logical Or\n");
    ans = (a<b) || (b>c);
    printf("%d < %d || %d > %d = %d\n",a,b,b,c,ans);

    //logical NOT..
    ans = !((a<b) || (b>c));
    printf("!(%d < %d || %d > %d = %d)\n",a,b,b,c,ans);

}