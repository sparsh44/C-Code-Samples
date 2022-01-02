#include<stdio.h>
//#include<strings.h>
void strcopy(char target[], char source[])
{
   int i=0;
   while(i<=30)
   {
       target[i]=source[i];
       i++;
   }
   target[i]='\0';

}
int main()
{
    char st1[30]="sparsh";//source
    char st2[30];           //target
    //printf("the st2 now contains %s",strcpy(st2,st1));
    strcopy(st2,st1);
    printf("the copy function has copied %s",st2);



    return 0;
}
