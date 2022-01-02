#include<stdio.h>
int main()
{
    int a=10,b=20,c=30,d,e;
    c=a==b;
    printf("%d %d %d\n" ,a,b,c);
    c==a==b;
    printf("%d %d %d\n" ,a,b,c);
    d=!a;
    e=~a;
    printf("%d %d\n",d,e);




    return 0;

}

