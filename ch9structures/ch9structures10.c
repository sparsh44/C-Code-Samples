#include<stdio.h>
typedef struct complex
{
    char x;
    char y;
} cmp;
int main()
{
    cmp v1;
    v1.x='a';
    v1.y='b';

    printf("the complex number is %c + i%c",v1.x,v1.y);
    //to print a complex number
    return 0;
}
