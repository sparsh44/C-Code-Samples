#include<stdio.h>
int main()
{
//to find sum of n natural no.s using while loop
/*int i=1,N,  sum=0;
printf("ENTER N = ",N );
scanf("%d",&N);
while(i<=N)
{
sum =sum+i;
i++;
}
printf("SUM OF FIRST N NATURAL NO.S = %d",sum);*/


//using for loop
/*
int N,sum=0;
printf("ENTER N = ",N );
scanf("%d",&N);
for(int i=1;i<=N;i++)
{
sum = sum+i;}
printf("sum is  %d",sum);*/

//using do while loop

int N,sum=0,i=1;
printf("ENTER N = ",N );
scanf("%d",&N);
do{
sum = sum + i;
i++;

}

while(i<=N);
printf("sum is  = %d",sum);



return 0;
}
