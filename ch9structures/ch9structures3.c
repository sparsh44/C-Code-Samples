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
    struct employee facebook[100];    //structures are convinient way to store many data at a single place

    facebook[0].code=100;
    facebook[0].salary=150.5;
    strcpy(facebook[0].name,"sparsh");

    facebook[1].code=101;
    facebook[1].salary=155.5;
    strcpy(facebook[1].name,"shubam");

    facebook[2].code=102;
    facebook[2].salary=140.5;
    strcpy(facebook[2].name,"arun");

    printf("done");


    return 0;
}


