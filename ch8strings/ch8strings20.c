#include<stdio.h>
void check(char st[],char a)
{
    char *ptr=st;
   while(*ptr!='\0')
    {
        if(*ptr==a)
        {
           printf("yes");
            break;
        }

        ptr++;
        if(*ptr=='\0')
        {
            printf("no");
        }

    }
}

int main()
{
    char str[]="sparsh singh bhatia";
    check(str,'y');


    return 0;
}
