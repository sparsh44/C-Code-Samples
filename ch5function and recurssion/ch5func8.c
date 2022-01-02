/*#include<stdio.h>

int sum(int n);
int main()
{
//write a recursive program to print sum of n natural numbers

int a=10;

printf("%d",sum(a));

return 0;

}

int sum(int n)
{

 return (sum(n-1) + n ) ;

}*/
#include<stdio.h>
int sum(int n);
int main()
{
int N,m,number;
printf("ENTER THE N ");
scanf("%d",&N);


number = sum(N);


printf("\nSUM IS %d",number);



return 0;
}

int sum(int n)
{
    if(n != 0)
    {

        return n + sum(n-1);
    }

    else
    {
        return n;
    }
}


/*

#include <stdio.h>
int sum(int n);
int main() {
 int number, result;
 printf("Enter a positive integer: ");
 scanf("%d", &number);
 result = sum(number);
 printf("sum = %d", sum(number));
 return 0;
}
int sum(int n) {
 if (n != 0)
 // sum() function calls itself
 return n + sum(n-1);
 else
 return n;
}
*/
