#include<stdio.h>
int main()
{
//to print n natural no.s in reverse order

int N;
printf("ENTER N = ",N);
scanf("%d",&N);
for(int i=N;i;i--)   // we need not write 0<i   because only positive values are allowed and by default i means till a positive value
{
printf("%d\n",i);
}

return 0;
}


