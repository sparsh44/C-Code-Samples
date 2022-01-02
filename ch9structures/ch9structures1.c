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
    //structures are used to create our own datatype

    struct employee e1;
    e1.code=100;
    e1.salary=42.25;
   // e1.name="sparsh";    will not work

    strcpy(e1.name,"sparsh");
    printf("%d\n",e1.code);
    printf("%0.3f\n",e1.salary);
    printf("%s",e1.name);




    return 0;
}
