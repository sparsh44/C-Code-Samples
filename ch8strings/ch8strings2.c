 #include<stdio.h>
int main()
{
    char str[]="SPARSH";
    char *ptr=str;

    //char str[]={'S','P','A','R','S','H','\0'};
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }


    return 0;
}

