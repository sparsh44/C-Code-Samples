#include<stdio.h>
int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("sparsh.txt","r");
    //ptr = fopen("sparsh4945.txt","r");
    if(ptr==NULL)
    {
        printf("this file does not exist\n");
    }
    else
    {
        fscanf(ptr,"%d",&num);
        fscanf(ptr,"%d",&num2);
        fclose(ptr);

        printf("the value of num is %d\n",num);
        printf("the value of num2 is %d\n",num2);
    }

    return 0;
}


