#include<stdio.h>
int main()
{
    printf("%d, %d, %d, %d\n",72,072,0x72,0X72);

            //072 is an  octal number and is equivalent to  58 in decimal system
            //0x72 and 0X72 are hexadecimal numbers and are  equivalent to  114 in decimal system
    printf("%d ,%o, %x\n",72,72,72);
    //72 in octal system is 110 and 48 in hexadecimal system
    printf("%i,%i,%i",72,0110,0x48);
    //%i converts entered system of numbers into default decimal(binary ) system
    return 0;
}
