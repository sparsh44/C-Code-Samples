#include<stdio.h>
int main()
{
   FILE *ptr1;
   ptr1 =fopen("previous.txt","r");
   FILE *ptr2;
   ptr2=fopen("new.txt","w");
   int a;
   fscanf(ptr1,"%d",&a);
   fprintf(ptr2,"%d",a*2);

    fclose(ptr1);
    fclose(ptr2);


    return 0;
}





