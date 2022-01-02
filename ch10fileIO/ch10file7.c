#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("file.txt","r");
    int a,b,c;
    fscanf(ptr,"%d %d %d",&a,&b,&c);
    printf("%d %d %d \n",a,b,c);

    fclose(ptr);
    return 0;
}
