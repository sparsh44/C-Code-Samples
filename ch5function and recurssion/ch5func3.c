#include<stdio.h>
int factorial(int x);
int main()
{
//recursion --> when a function efined by us is called with in defination
int a=6;
printf("THE FACTORIAL OF %d IS %d",a,factorial(a));




return 0;
}
int factorial(int x)
{
if(x==1 || x==0)
{return 1;}
else
{return x*factorial(x-1);
}
}
