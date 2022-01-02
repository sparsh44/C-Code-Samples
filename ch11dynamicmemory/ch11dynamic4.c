#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("ENTER n :");
    scanf("%d",&n);
    int *ptr;
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("ENTER THE VALUE OF %d ELEMENT : ",i+1);
        scanf("%d",&ptr[i]);
    }
      for(int i=0;i<n;i++)
    {
        printf("THE VALUE OF %d ELEMENT IS %d\n ",i+1,ptr[i]);

    }

    return 0;
}

