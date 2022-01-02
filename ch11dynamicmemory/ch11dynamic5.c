#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int *ptr2;
    ptr=(int*)malloc(600*sizeof(int));
    for(int i=0;i<600;i++)
    {
        ptr2=(int*)malloc(600000*sizeof(int));    //this would have consumed a lot of space in computer unnecessarily.
        printf("ENTER THE VALUE OF %d ELEMENT : ",i+1);
        scanf("%d",&ptr[i]);
        free(ptr2);   //this function stops unnecessary usage by ptr2
    }


    return 0;
}

