//Relational operators -> >,<,>=,<=,==,!=
#include<stdio.h>
void main()
{
    int a = 10;
    int b = 20;
    int c = 10;
    int d = 30;
    int ans;

    //Greater than
    ans = a>b;
    printf("%d > %d = %d\n",a,b,ans);

    //smaller than
    ans = a<b;
    printf("%d < %d = %d\n",a,b,ans);

     //smaller than equal to
    ans = a<=c;
    printf("%d <= %d = %d\n",a,c,ans);

     //greater than equal t0
    ans = b>=d;
    printf("%d >= %d = %d\n",b,d,ans);

     //equal to equals to
    ans = (a==c);
    printf("%d == %d = %d\n",a,c,ans);

    //not equals to
    ans = (a!=c);
    printf("%d == %d = %d\n",a,c,ans);
}