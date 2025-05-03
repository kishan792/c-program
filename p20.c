//check vowel or not //case sesentive
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character\n");
    scanf(" %c",&ch);//a

    if(ch==97 || ch=='e' || ch=='i' || ch=='o' ||ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("Given char is a vowel\n");
    }
    else
    {
        printf("Given char is not a vowel\n");
    }
}