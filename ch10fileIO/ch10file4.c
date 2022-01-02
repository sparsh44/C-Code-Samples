#include<stdio.h>
int main()
{
   /* int num=44;
    FILE *fptr;
    fptr=fopen("generated.txt","w");    //with write function a file which earlier did not exist now is created and num is written in it
    fprintf(fptr,"%d",num);
    fclose(fptr);*/

    char str[]="string";
    FILE *fptr;
    fptr=fopen("generated.txt","w");
    fprintf(fptr,"%s",str);
    fclose(fptr);




    return 0;
}

