//File handling  ->
/*Write mode help us to create a new file if it nott exist. if the file exist it open that file.

write mode removes the existing data

append mode will not replace the existing data...

    fopen("fileName","Mode") and return a address.

    fclose() -> to close a file....
*/
#include<stdio.h>
int main()
{
   FILE *fp = fopen("user.txt","w");

    if(fp!=NULL)
    {
        printf("File opened successfully\n");
    }
    else{
         printf("Error opening a file\n");
    }

    //writing a single charchater....
    //fputc();

    // char ch;
    // printf("Enter the char\n");
    // scanf(" %c",&ch);

    // fputc(ch,fp);


    //string number
    //fprintf(filePointer,formatSpecifier,values);

    char name[50];
    int phone;

    printf("Enter the name\n");
    scanf("%s",name);
    printf("Enter the phone\n");
    scanf("%d",&phone);


    fprintf(fp,"Name -> %s\nphone -> %d\n",name,phone);


    fclose(fp);

    return 0;
}