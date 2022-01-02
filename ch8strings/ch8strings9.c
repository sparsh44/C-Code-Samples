#include<stdio.h>
#include<string.h>
int main()
{
    char st1[30]="hello";
    char st2[]="heLlo";
    int value = strcmp(st1,st2);       //basically it gives difference of asci values in my compiler
                                        //  it subtracts charachters using asci values
                                        //cmp means comparison
    printf("the value is %d",value);


    return 0;
}






