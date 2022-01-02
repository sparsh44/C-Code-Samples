#include<stdio.h>
int main()
{
    //getc function is used to extract data character by character from chosen file
    //putc function is used to write data character by character into chosen file

    FILE *ptr;
    /*
    ptr =fopen("getcputc.txt","r");

    printf("this is character %c\n",fgetc(ptr));
    printf("this is character %c\n",fgetc(ptr));
    printf("this is character %c\n",fgetc(ptr));
    printf("this is character %c\n",fgetc(ptr));
    printf("this is character %c\n",fgetc(ptr));
    printf("this is character %c\n",fgetc(ptr));
    printf("this is character %c\n",fgetc(ptr));
    printf("this is character %c\n",fgetc(ptr));
*/


    ptr=fopen("putc.txt","w");
    putc('s',ptr);
    putc('p',ptr);
    putc('a',ptr);
    putc('r',ptr);
    fclose(ptr);


    return 0;
}

