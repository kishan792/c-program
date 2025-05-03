//nested if else
#include<stdio.h>
void main()
{
    char gen;
    int sp;
    int dis;

    printf("Enter the gender\n");
    scanf(" %c",&gen);

    printf("Enter the shopping price\n");
    scanf("%d",&sp);

    if(gen=='f' || gen=='F')
    {
        //when user is a female
        if(sp>=10000)
        {
            //if sp >=10000
            dis = 0.15*sp;
            printf("You got a discount of %d\n",dis);
        }
        else
        {
            //if sp <10000
            dis = 0.10*sp;
            printf("You got a discount of %d\n",dis);
        }
    }
    else
    {
        //when user is not a female
        if(sp>=10000)
        {
            //if sp >=10000
            dis = 0.12*sp;
            printf("You got a discount of %d\n",dis);
        }
        else
        {
            //if sp <10000
            dis = 0.08*sp;
            printf("You got a discount of %d\n",dis);
        }

    }

}