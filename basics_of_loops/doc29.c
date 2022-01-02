#include<stdio.h>
int main()
{
//to check whether a no. is prime or not using while loop
int N=5,prime=1;

/*
while(i<N)            for(int i=2;i<N;i++)
{
if(N%i == 0)
{prime=0;
break;}


i++;
}*/
for(int i=2;i<N;i++)
{
if(N%i == 0)
{prime=0;
break;}}

if(prime)
{
printf("this number is prime");
}
else{printf("this number is not prime");
}



return 0;
}


