#include<stdio.h>
int counter(char c[],char a)
{
    char *ptr=c;
    int count=0;
    while(*ptr!='\0')
    {
        if(*ptr==a)
        {
            count++;

        }
        ptr++;
    }
    return count;
}
int main()
{
    char n='m';
    char str[]="sparsh singh bhatia";
    //to count no. of s in this string
    int m=counter(str,n);
    printf("the number of a in string are %d",m);


    return 0;
}
