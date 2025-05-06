//WAP to create a menu driven program.
// user press s -> calculate area of square
//user press r -> calculate are of rectangle
// t-> triangle
// c -> circle

#include<stdio.h>
void main()
{
  char ch;
int len,bre,area,side,base,height,rad;
const float pi = 3.14;

  printf("Press r to calculate area of rectangle\n"); 
  printf("Press s to calculate area of square\n");
  printf("Press t to calculate area of triangle\n"); 
  printf("Press c to calculate area of circle\n");

  scanf(" %c",&ch);

  switch(ch)
  {
    case 'r':
        //Area of rectangle...
        printf("Enter the len\n");
        scanf("%d",&len);

        printf("Enter the bre\n");
        scanf("%d",&bre);

        area  = len * bre;
        
        printf("Area of rectangle = %d\n",area);
    break;

    case 's':
        //Area of square...
        printf("Enter the side\n");
        scanf("%d",&side);

        area = side * side;

        printf("Area of square = %d\n",area);

    break;

    case 't':
        //Area of triangle...
        printf("Enter the base\n");
        scanf("%d",&base);

        printf("Enter the height\n");
        scanf("%d",&height);

        area  = 0.5 * base * height;
        
        printf("Area of triangle = %d\n",area);

    break;

    case 'c':
        //Area of circle...
        printf("Enter the rad\n");
        scanf("%d",&rad);

        area  = pi * rad *rad;
        
        printf("Area of circle = %d\n",area);
    break;

    default:
        printf("Invalid Input\n");
    break;

  }
}