#include<stdio.h>
int main()
{
    //declare the array & intialize it

    //datatye arrayName[size] = {val1,val2,val3,val4};

    int marks[5] = {74,68,63,89,94};
   

   //Access array element using loop..
   int i;
   for(i=0;i<5;i++)
   {
    printf("Value of %d index : %d\n",i,marks[i]);
   }

}