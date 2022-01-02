#include<stdio.h>
int main()
{
//to check whether a no. is divisble by 97 or not
int a,b;
printf("ENTER a=",a);
scanf("%d",&a);
b=a%97;

if(b==0)
{
    printf("NUMBER IS DIVISIBLE BY 97");
}
else
{
        printf("NUMBER IS NOT  DIVISIBLE BY 97");

}
return 0;}
