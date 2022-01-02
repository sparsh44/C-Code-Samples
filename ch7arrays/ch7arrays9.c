#include<stdio.h>
int main ()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr=arr;

    printf("%u\n",&arr[0]);
    printf("%d\n",arr[6]);
    printf("%u\n",ptr);


    ptr=ptr+2;
                 //this shows that ptr +2 is pointing the third element

    if(ptr==&arr[2])
    {
        printf("these both point to the same location\n");
    }
    else
    {
        printf("these both do not  point to the same location\n");

    }



    return 0;
}
