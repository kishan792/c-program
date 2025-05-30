#include<stdio.h>
int main()
{
    //declare the array & intialize it

    //datatye arrayName[size] = {val1,val2,val3,val4};

    int marks[5] = {74,68,63,89,94};

    //Array have index that start from 0

    printf("Value of 0 index : %d\n",marks[0]);
    printf("Value of 1 index : %d\n",marks[1]);
    printf("Value of 2 index : %d\n",marks[2]);
    printf("Value of 3 index : %d\n",marks[3]);
    printf("Value of 4 index : %d\n",marks[4]);

    //update the 2 index value
    marks[2] = 65;

    printf("Value of 2 index : %d\n",marks[2]);
}