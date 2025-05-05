#include<stdio.h>
void main()
{
    int money;
    printf("Enter the amount\n");
    scanf("%d",&money);
    int notes;

    if(money>=1000)
    {
        notes = money/1000;
        printf("1000 Notes = %d\n",notes);
        money = money - (notes*1000);
    }

    if(money>=500)
    {
         notes = money/500;
        printf("500 Notes = %d\n",notes);
        money = money - (notes*500); 
    }

    if(money>=200)
    {
        notes = money/200;
        printf("200 Notes = %d\n",notes);
        money = money - (notes*200); 
    }

    if(money>=100)
    {
         notes = money/100;
        printf("100 Notes = %d\n",notes);
        money = money - (notes*100); 
    }

    if(money>=50)
    {
         notes = money/50;
        printf("50 Notes = %d\n",notes);
        money = money - (notes*50); 
    }

    if(money>=20)
    {
         notes = money/20;
        printf("20 Notes = %d\n",notes);
        money = money - (notes*20); 
    }

    if(money>=10)
    {
         notes = money/10;
        printf("10 Notes = %d\n",notes);
        money = money - (notes*10); 
    }

    if(money>=5)
    {
         notes = money/5;
        printf("5 Notes = %d\n",notes);
        money = money - (notes*5); 
    }

    if(money>=2)
    {
         notes = money/2;
        printf("2 Notes = %d\n",notes);
        money = money - (notes*2); 
    }

    if(money>=1)
    {
         notes = money/1;
        printf("1 Notes = %d\n",notes);
        money = money - (notes*1); 
    }

}