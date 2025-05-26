//With return type and without argument...
//return is a keyword when ever the compliler see the return keyord it return from function..
#include<stdio.h>

char bday();

char bday()
{
    char gen;
    printf("Enter the gen\n");
    scanf(" %c",&gen);

    if(gen=='f')
    {
        printf("tahnak you for coming\n");
        return 'V';
    }
   
   printf("Enjoy the party till 4am\n");
   return 'I';
}
void main()
{
   char a = bday();
   printf("%c\n",a);
}