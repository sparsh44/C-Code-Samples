#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr=(int*)calloc(6,sizeof(int));
    /*for(int i=0;i<6;i++)                //calloc by default  allots 0 value to every element
    {
        printf("ENTER THE VALUE OF %d ELEMENT : ",i+1);
        scanf("%d",&ptr[i]);
    }*/
      for(int i=0;i<6;i++)
    {
        printf("THE VALUE OF %d ELEMENT IS %d\n ",i+1,ptr[i]);

    }

    return 0;
}
