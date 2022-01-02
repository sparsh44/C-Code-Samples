#include<stdio.h>
int main()
{
    int i=345;
    int *ptr=&i;
    int **ptr2ptr=&ptr;
    printf("%d",**ptr2ptr);
    return 0;

}
