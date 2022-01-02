#include<stdio.h>
void decrypt(char *c)
{             //encrypting characters of string
    char *ptr=c;
    while(*ptr!='\0')
    {
        *ptr=*ptr-1;   //*ptr is for asci value of character
        *ptr++;

    }

}
int main()
{
    char str[]="tqbsti"; //encrypted code of sparsh which is decrypted back to sparsh
    decrypt(str);
    printf("the decrypted string is %s",str);

    return 0;
}
