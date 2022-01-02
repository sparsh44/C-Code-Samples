#include<stdio.h>
int funmin(int arr[],int n)
{
    int min=arr[n-1];
    for(int i=0;i<n;i++)
    {

        if(arr[i]<min)
        {
            min=arr[i];
        }
    }


    return min;
}
int main()
{
    //to find minimum number in an array
    int arr[]={367,33,55656,13,67,10};
    int mini=funmin(arr,6);

    printf("the minimum number in this array is %d",mini);


    return 0;
}
