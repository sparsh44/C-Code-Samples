#include<stdio.h>
int main()
{
//break is used in loops and switch
int i=0;
while(i<=8)
{
if(i==5)
{break;}


printf("THE VALUE OF i IS = %d\n",i);
i++;
}
//printf("%d",i);   //ultimately value of i saved in c is 5
return 0;
}



