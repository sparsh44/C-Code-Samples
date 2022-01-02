#include<stdio.h>
int main()
{
//write a programme to print addresss of a variable and use it to print value of it
    int a=9;
    int *ptr=&a;
    printf("the address of a is %u\n",&a);
    printf("the value of a is %d",*ptr);

    return 0;

}
