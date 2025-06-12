//passing a structure to a function

#include<stdio.h>
struct Employee
{
    int age;
    int sal;
    char gen;
};

void checkSal(struct Employee e1)
{
    if(e1.sal>=10000)
    {
        printf("sal is greater than 10000\n");
    }
    else
    {
        printf("sal is less than 10000\n");
    }
}

int main()
{
  struct Employee e1 = {24,12000,'M'};  

  //int x = 12000;

  checkSal(e1);
}