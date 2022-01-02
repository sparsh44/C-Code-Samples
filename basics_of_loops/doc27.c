#include<stdio.h>
int main()
{
//to find sum of all multiples of 8 till 8X10
int N,sum=0;
printf("ENTER N = ",N );
scanf("%d",&N);
for(int i=1;i<=10;i++)
{
sum = sum+i;}
printf("sum is  %d",sum*N);


return 0;
}

