#include<stdio.h>
struct Cordinate
{
    int x;
    int y;
};


struct Cordinate sum(struct Cordinate a,struct Cordinate b)
{
    struct Cordinate c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    return c;
}
int main()
{
    struct Cordinate a = {10,15};
    struct Cordinate b = {20,25};

    //int a = 10;
   // int b = 20;

    struct Cordinate ans = sum(a,b);

    printf("Ans.x : %d\n",ans.x);
    printf("Ans.y : %d\n",ans.y);
}