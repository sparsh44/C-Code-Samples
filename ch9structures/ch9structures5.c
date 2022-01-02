#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[25];
};
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;

   // (*ptr).code=104;
    ptr->code=104;

    printf("%d",e1.code);

    return 0;
}
