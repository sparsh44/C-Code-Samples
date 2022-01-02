#include<stdio.h>
int main()
{
    int a=23,b=12,c=10,d;
    d=c=b=a; // assignment operator works right to left
    printf("%d %d %d %d \n\n\n\n " ,a,b,c,d);

    int e=2,f=3,g=1,h;
    h=e<f>g;
    printf("%d\n",h);
    h=e<f<g-1;
    printf("%d\n",h);
    return 0;

}
