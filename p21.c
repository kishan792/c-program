#include<stdio.h>
void main()
{
    int sp;
    int dis;

    printf("Enter the shopping price\n");
    scanf("%d",&sp);

    if(sp>=10000)
    {
        dis = 0.10 * sp;
        printf("You have got a discount of %d RS.\n",dis);
        sp = sp - dis;
        printf("Final price is %d RS.\n",sp);
    }
    else
    {
        dis = 0.08 * sp;
        printf("You have got a discount of %d RS.\n",dis);
        sp = sp - dis;
        printf("Final price is %d RS.\n",sp);
    }
}