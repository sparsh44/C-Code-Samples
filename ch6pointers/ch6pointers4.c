#include<stdio.h>
void address(int a);
int main()
{
    int i=4;
    printf("the address of i is %u\n",&i);

    address(&i);

    return 0;

}
void address(int a)
{
    printf("the address of i is %u",&a);
}
