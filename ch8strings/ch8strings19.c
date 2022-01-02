#include<stdio.h>
void check(char c[],char a)
{
    char *ptr=c;
    while(*ptr!='\0')
    {
        if(*ptr==a)
        {
            printf("yes");
            break;

        }
        ptr++;
    }
}
int main()
{
    char str[]="sparsh";
    check(str,'n');

    //to check the occurrence of a character in a string
    return 0;

}
