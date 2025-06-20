//r mode -> it open file in read mode if file is not created it will not create a new file
#include<stdio.h>
int main()
{
   FILE *fp = fopen("user.txt","r");

    if(fp!=NULL)
    {
        printf("File opened successfully\n");
    }
    else{
         printf("Error opening a file\n");
    } 

    while(feof(fp)!=1)
    {
        char str[50];

        fgets(str,10,fp);
        printf("%s",str);
    }

    fclose(fp);
}