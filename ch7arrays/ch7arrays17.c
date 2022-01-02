#include<stdio.h>
int searching(int arr[],int n,int num)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            return 1;
        }
    }
}
int main()
{
    //to search a number in an array present or not
    int arr[]={5,3,66,44,976,34};
    int a=searching(arr,6,34);
    if(a==1)
    {
        printf("yes");
    }
    else{
        printf("no");
    }


    return 0;
}
