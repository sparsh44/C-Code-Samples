#include<stdio.h>
//#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[25];
};
int main()
{
    struct employee e1={100,160.5,"sparsh"};   //another way to initialise structure
    printf("CODE FOR e1 : %d\n",e1.code);
    printf("SALARY FOR e1 : %f\n",e1.salary);
    printf("NAME FOR e1 : %s\n",e1.name);



    return 0;
}



