#include<stdio.h>
int main()
{
//to convert celcius to farhenite using formula 9by5(celcius) + 32
int celcius,farhenite;
printf("TEMP IN CELCIUS=",celcius);
scanf("%d",&celcius);
farhenite=32+( 9.0/5.0*celcius);
printf("TEMP IN FARHENITE=%d",farhenite);
return 0;
}

