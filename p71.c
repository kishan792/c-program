//check no is even or odd --> with returntype without argument...

#include<stdio.h>

 int checkEvenOdd();

 int checkEvenOdd()
 {
    int n;
    printf("Enter the num\n");
    scanf("%d",&n);

    if(n%2==0)
    {
        return 1;
    }
    return 0;
 }

 int main()
 {
    int ans = checkEvenOdd();
    if(ans==1)
    {
        printf("Num is even\n");;
    }
    else{
        printf("Num is odd\n");
    }
 }