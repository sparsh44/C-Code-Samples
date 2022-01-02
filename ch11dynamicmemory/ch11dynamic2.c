#include<stdio.h>
#include<stdlib.h>
int main()
{
    //array of 5 floats using malloc
    float *ptr;
    ptr=(float*)malloc(5*sizeof(float));
    for(int i=0;i<5;i++)
    {
        printf("ENTER THE VALUE OF %d ELEMENT : ",i+1);
        scanf("%f",&ptr[i]);

    }
    for(int i=0;i<5;i++)
    {
        printf(" THE VALUE OF %d ELEMENT IS %0.2f \n",i+1,ptr[i]);

    }

    return 0;
}


