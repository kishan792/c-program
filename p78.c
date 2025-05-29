#include<stdio.h>
void show()
{
    printf("Kishan\n");
    show();
}
int main()
{
    printf("I am in main function\n");

    show();

    printf("I am in main function\n");
}