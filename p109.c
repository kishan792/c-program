#include<stdio.h>
#include"string.c"  
void concatString(char str1[],char str2[])
{
    int len1 = length(str1);
    int len2 = length(str2);

    int i;
    for(i=0;i<len2;i++)
    {
        str1[len1+i] = str2[i];
    }
}

int main()
{
    char str1[50] = "Kishan";
    char str2[50] = "mallick";

    concatString(str1,str2);

    printf("%s",str1);
}