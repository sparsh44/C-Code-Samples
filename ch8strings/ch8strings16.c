#include<stdio.h>
void encrypt(char *c)
{             //encrypting characters of string
    char *ptr=c;
    while(*ptr!='\0')
    {
        *ptr=*ptr+1;   //*ptr is for asci value of character
        *ptr++;

    }

}
int main()
{
    char str[]="sparsh";
    encrypt(str);
    printf("the encrypted string is %s",str);

    return 0;
}
