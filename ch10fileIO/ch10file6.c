#include<stdio.h>
int main()
{
    FILE *ptr;
        char c;

    ptr=fopen("spsingh.txt","r");
    c=fgetc(ptr);    //initialised
    while(c!=EOF)     //here we are using getc to print full file and using loop in it so that it reads
                        //character by character and prints file
                        //EOF    end of file
    {
        printf("%c",c);
        c=fgetc(ptr);    //looped

    }
    fclose(ptr);
    return 0;
}
