#include<stdio.h>
#include<stdlib.h>
int main()
{    //insertion of number at some position
        int n=10;
        int arr[n]={1,2,3,4,5,6,7,8,9,10};
        int *ptr=arr;
        ptr=(int*)malloc(n*sizeof(int));
        int num,pos;
        num=16;
        pos=7;
        n++;
        ptr= realloc(ptr,n*sizeof(int));
        for(int i=(n-1);i>pos;--i)
        {
            arr[i]=arr[i-1];
        }
        arr[pos]=num;
        for(int i=0;i<(n);i++)
        {

            printf("%d\n",arr[i]);
        }
    return 0;
}
