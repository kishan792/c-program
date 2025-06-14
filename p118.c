//Dynamic memory alloction
 //NULL pointer -> is a poiter whose value is NULL;
 //void pointer -> is a generic pointer
 //sytanx:- (typeCast)malloc(no of bytes);
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //Malloc function
    
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    int *ptr = NULL;
   
    ptr = (int*)malloc(n*sizeof(int));

    if(ptr==NULL)
    {
        printf("memory allocation is un successfull\n");
        return 0;
    }

    for(int i =0;i<n;i++)
    {
        printf("Enter the %d value\n",i+1);
        scanf("%d",ptr+i);
    }

    for(int i =0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
        
    }

    return 0;
}