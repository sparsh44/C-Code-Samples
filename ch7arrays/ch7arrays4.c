#include<stdio.h>
int main()
{
    //pointer arithmetic

    int a=55;
    int  *ptr=&a;

    int b=49;
    int *ptr2=&b;
    printf("the address contained in pointer ptr is : %u\n",ptr);

    printf("addition to  pointer ptr is : %u\n",ptr+1);    //an integer added to pointer increased value by 4

    printf("subtraction to  pointer ptr is : %u\n",ptr-1);

    printf("the address contained in pointer ptr2 is : %u\n",ptr2);

    printf("subtraction of two pointers : %u\n",ptr2-ptr);
    if(ptr2>ptr)
    printf("ptr2 is storing after ptr");
    else







    return 0;
}
