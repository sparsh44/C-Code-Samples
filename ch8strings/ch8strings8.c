#include<stdio.h>
#include<string.h>
int main()       //cat stands for concatenate   which means linking
{
    char st1[30]="hello";
    char st2[30]="sparsh";

    strcat(st1,st2);   //   strcat(string to be modified , stringh to be connected)
    printf("this will link st1 and st2 like this :%s\n",st1);

    printf("%u\n",&st1[0]);      //this shows array consumes unecessary memory
    printf("%u\n",&st2[0]);

    return 0;
}





