//string
#include<stdio.h>
int main()
{
    char name[50] = {'K','I','S','H','A','N','\0'};

    int i = 0;
    while(name[i]!='\0')
    {
        printf("%c",name[i]);
        i++;
    }

    printf("My name is %s\n",name);

    return 0;
}