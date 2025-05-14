//continue _. continue statement will help to continue  the loop whenever the specified condition is true

#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=20;i++)
    {
        
        if(i==12)
        {
            printf("continue the loop...\n");
            continue;
        }
        printf("Value of i --> - %d\n",i);
    }
    
}