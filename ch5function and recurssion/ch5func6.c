/*#include<stdio.h>
int main()
{
 int n1=0, n2=1,n3,number;
 printf("Enter the number of elements:");
 scanf("%d",&number);
 printf("\n %d %d",n1,n2);//printing 0 and 1
 for(int i=2;i<=number;++i)//loop starts from 2 because 0 and 1 are already printed
 {
  n3=n1+n2;
  printf(" %d",n3);
  n1=n2;
  n2=n3;
 }
  return 0;
 }*/

#include<stdio.h>

int FIBO(int n);
int main()
{
    int n,i=0;
    printf("ENTER n ");
    scanf("%d",&n);

//for(int c=1 ; c<=n; c++)
//{
    printf("\n%d\n",FIBO(n));
//i++;
//}


    return 0;
}
int FIBO(int n)
{
    if( n==0 )
        return 0;
    else if( n==1 )
        return 1;
    else
        return ( FIBO(n-1) + FIBO(n-2) );
}
/*
#include<stdio.h>

int Fibonacci(int);

int main()
{
   int n, i = 0, c;

   scanf("%d",&n);

   printf("Fibonacci series\n");

   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d\n", Fibonacci(i));
      i++;
   }

   return 0;
}

int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
}
*/
