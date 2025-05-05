//Electricity bill...............
#include<stdio.h>
void main()
{
    int unit;
    printf("Enter the unit\n");
    scanf("%d",&unit);

    int charges;

    if(unit<=50)
    {
        charges = unit * 0.50;
    }
    else if(unit>50 && unit<=150)
    {
        charges = 25;
        unit = unit-50;
        charges = charges + unit * 0.75;
    }
    else if(unit>150 && unit<=250)
    {
        charges = 100;
        unit = unit-150;
        charges = charges + unit * 1.20;
    }
    else
    {
        charges = 220;
        unit = unit - 250;
        charges = charges + unit * 1.75;
    }
}