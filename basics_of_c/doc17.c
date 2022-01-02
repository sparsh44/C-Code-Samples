#include<stdio.h>
int main()
{
    int a=2,b=2,c,d;
    // printf("%d %d %d %d\n",a,a++,++a,b);
    c=++a;     // a is incremented to 3 hence a and c  are 3
    d=b++;    //d is assigned b=2   and b is incremented to 3 and then b=3


    printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);

    printf("%d",10^2);    //  ^  is a bitwise XOR gate    10  1010
    //     2  0010
    //  10^2  1000 =8  in XOR hate  1 1 is 0

    //there is no operator to find exponent in c
    return 0;
}
