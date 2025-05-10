//For loop
/*
    for(intilization;condition;updation)
    {
        //body of loop
    }
    properties of expression 1 -> intilialzation
    --> it is not mandatory
    ---> multiple intilization can be done

    #include<stdio.h>
    void main()
    {
        int i;
        int j;
        for(i=1,j=1 ; i<=10 ; i++)
        {
            printf("%d\n",i);
        }
    }

    o/p -.1,2,3,4,5,6,7,8,9,10 -->loop will work according i variable

     properties of expression 2 -> codition
    --> it is not mandatory
    --> multiple condition can be there

    when there is multiple condition -> loop will execute according to last condition..
    #include<stdio.h>
    void main()
    {
        int i;
        int j;
        for(i=1;i<=10,i<=12,i<=7;i++)
        {
            printf("%d\n",i);
        }
    }

    if no condition given in for loop loop will go for infinite time....

    void main()
    {
        int i;
        int j;
        for(i=1; ; i++)
        {
            printf("%d\n",i);
        }
    }
    
    property of Expression 3 -> updation
    --> it is not mandatory
    void main()
    {
        int i;
        int j;
        for(i=1;i<=10;)
        {
            printf("%d\n",i);
        }
    }
    //if no updation code will work infinte times


-->multiple updation can be there...
if there is multiple updation loop will update all the values...


//Empty loop -> A loop with no intilaization ,no condtion ,no updation
*/
#include<stdio.h>
void main()
{
    int i;
    int j;
    for(i=1;i<=10;i++,i=i+2)
    {
        printf("%d\n",i);
    }
}