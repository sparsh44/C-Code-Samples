#include<stdio.h>
int main()
{
    printf("%d\b\t,%5d,%-5d,%05d\n",32,32,32,32);
    printf("\rhello\n\n");
    //5d means 5 columns and towards right
    //-5d means  5 columns and towards left
    //05 means 5 columns rightwards and zeros before
    //\t for tab
    //\b for backspace
    //\r is carriage return;
     char star='*';
       int m=10;


     printf("%c",m,star);

    return 0;
}

