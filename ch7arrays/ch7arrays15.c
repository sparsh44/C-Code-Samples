#include<stdio.h>
int funmax(int arr[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    //to find maximum number in an array
    int arr[]={1,33,55656,13,67,2};
    int max=funmax(arr,6);

    printf("the maximum number in this array is %d",max);


    return 0;
}
