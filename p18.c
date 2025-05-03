//Check given char is in upper case or not...
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character\n");
    scanf(" %c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("Character is in upper case\n");
    }
    else
    {
        printf("Character is in lower case\n");
    }
}