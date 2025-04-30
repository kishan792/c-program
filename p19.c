//WAP to check given char is alphabet or not
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character\n");
    scanf(" %c",&ch);

    if((ch>='A' && ch<='Z') || (ch>='a'&&ch<='z'))
    {
       printf("Given char is alphabet\n"); 
    }
    else{
        printf("Given character is not a alphabet\n");
    }
}