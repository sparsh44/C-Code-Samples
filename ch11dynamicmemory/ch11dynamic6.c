#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr=(int*)malloc(6*sizeof(int));
    for(int i=0;i<6;i++)
    {
        printf("ENTER THE VALUE OF %d ELEMENT : ",i+1);
        scanf("%d",&ptr[i]);
    }
      for(int i=0;i<6;i++)
    {
        printf("THE VALUE OF %d ELEMENT IS %d\n ",i+1,ptr[i]);

    }

       // reallocating new size to ptr
    ptr=realloc(ptr,10*sizeof(int));


    for(int i=0;i<10;i++)
    {
        printf("ENTER THE VALUE OF %d ELEMENT : ",i+1);
        scanf("%d",&ptr[i]);
    }
      for(int i=0;i<10;i++)
    {
        printf("THE VALUE OF %d ELEMENT IS %d\n ",i+1,ptr[i]);

    }

    return 0;
}
