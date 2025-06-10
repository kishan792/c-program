#include<stdio.h>
#include<string.h>

int length(char name[])
{
    int i = 0;

    while(name[i]!='\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char name[50];

    printf("Enter your name\n");
    scanf("%s",name);

    int len = length(name);
    printf("Lentg of my name is %d\n",len);

    return 0;
}
