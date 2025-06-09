#include<stdio.h>
#include"string.c"
void toLower(char str[])
{
    int len = length(str);
    int i;
    for(i =0;i<len;i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i] = str[i] + 32;
        }
    }
    
}
int main()
{
    char str[50];
    
    printf("Enter your message\n");
    scanf("%s",str);

    printf("before lower function : %s\n",str);

    toLower(str); 

    printf("after lower function : %s\n",str); 
}