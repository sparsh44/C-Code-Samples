#include<stdio.h>
int len(char str[])
{
    char *ptr=str;
    int a=0;
    while(*ptr!='\0')
    {
        a++;
        ptr++;
    }
        return a;
}
int main()
{
    char st[]="SPARSH SINGH";
    int l=len(st);   //function call
    printf("the length of this string is %d",l);




    return 0;
}
