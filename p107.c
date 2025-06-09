#include<stdio.h>
#include"string.c"



int countVowels(char str[])
{
    int count = 0;

    int i;
    int len= length(str);
    for(i = 0;i<len;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            count++;
        }
        
    }
    return count;
}
int main()
{
    char str[50];

    printf("Enter your message\n");
    scanf("%s",str);

    int count = countVowels(str);
    printf("No of vowels is %d\n",count);
}