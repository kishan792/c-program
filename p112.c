//Structure padding  -> alway keep the higher data type at top
#include<stdio.h>
#pragma pack 0;
struct Employee
{
    int a;
    
    char c;
    int b;
    
    
};

int main()
{
    int x;
    struct Employee e1;

    printf("size of int : %d\n",sizeof(int));

    printf("size of struct Employee : %d\n",sizeof(struct Employee));


}