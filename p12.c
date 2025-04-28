#include<stdio.h>
void main()
{
    int a = 23;
    int b = 29;

    int ans;

    //Bitwise And - &
    ans = a&b;
    printf("%d & %d = %d\n",a,b,ans);

    //Bitise OR |
    ans = a|b;
    printf("%d | %d = %d\n",a,b,ans);

     //Bitise XOR |
    ans = a^b;
    printf("%d ^ %d = %d\n",a,b,ans);

    //left <<
    a=23;
    b=3;
    ans = a<<b;
    printf("%d << %d = %d\n",a,b,ans);

      //left >>
    a=23;
    b=2;
    ans = a>>b;
    printf("%d >> %d = %d\n",a,b,ans);
}