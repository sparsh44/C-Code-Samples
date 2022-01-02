#include<stdio.h>
void counter(int num[],int n)
{
    int a=0;
    for(int j=0; j<n; j++)
    {
        if(0<num[j])
        {

            a++;

        }
    }

    printf("%d",a);
}
int main ()
{
    int arr[]= {1,2,3,4,5,6,7,-1,-2,-3,-4,-5};
    printf("the total number of positive elements are ");

    counter(arr,12);
    // a programme to count no. of positive elements in array

    return 0;
}

