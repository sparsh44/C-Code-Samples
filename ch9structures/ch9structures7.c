#include<stdio.h>
#include<string.h>

typedef struct employee
{
    //     struct employee now is intro
    int code;
    float salary;
    char name[25];
} intro;  //typedef  enables us to give easy name to struct employee that is intro

void show(intro emp)   //hence this shows that struct is defined as a new datatype similar like int char
{
    printf("The code for employee is : %d\n",emp.code);
    printf("The salary for employee is : %f\n",emp.salary);
    printf("The name for employee is : %s\n",emp.name);

}
int main()
{
    intro e1;
    intro *ptr;
    ptr=&e1;

    // (*ptr).code=104;
    ptr->code=104;
    ptr->salary=1000.25;
    strcpy(ptr->name,"sparsh");


    show(e1);

    return 0;
}


