#include<stdio.h>
#include<string.h>
int main()
{
    char *st1="this";//source
    char st2[50];   //target
    strcpy(st2,st1);         //strcpy(target,source) when we want to copy one string to another place strcpy is used

    printf("the value of st2 now contains %s",st2);


    return 0;
}




