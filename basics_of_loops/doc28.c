#include<stdio.h>
int main()
{
//to calculate factorial of a no. using for loop

/*
int n=5,factorial=1;
for(int i=1;i<=n;i++)
{
factorial = (factorial*i);
}
printf("%d",factorial);

*/

//using while loop
int n=5,factorial=1,i=1;
while(i<=n)
{
factorial=(factorial*i);
i++;
}
printf("factorial is =%d",factorial);
return 0;
}


