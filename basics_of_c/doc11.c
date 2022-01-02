#include<stdio.h>
int main()
{
//to calculate simple interest
int p,r,y;
printf("ENTER PRINCIPAL AMOUNT=",p);
scanf("%d",&p);
printf("ENTER RATE=",r);
scanf("%d",&r);
printf("ENTER DURATION=",y);
scanf("%d",&y);
int SI=(p*r*y)/100;
printf("SIMPLE INTEREST IS=%d",SI);
return 0;
}

