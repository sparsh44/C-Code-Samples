#include<stdio.h>
int main()
{
    int i=34;       //in my computer  int is of 4 bytes
                    //char is of 1 byte
    int *ptr=&i;
    printf("the value of ptr is %u\n",ptr);

    ptr++;    //this is pointer arithmetic
    //ptr--;
    //ptr++;
    //ptr++;

    printf("the value of  new ptr is %u\n",ptr);


    char b=55;
    char *ptrr=&b;
    printf("the value of ptrr  is %u\n",ptrr);
    ptrr++;
    printf("the value of new ptrr is %u\n",ptrr);





    return 0;
}

