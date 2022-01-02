/*#include<stdio.h>
void printarray(int *ptr,int n)
{
    for(int i=0; i<n;i++)
    {
        printf("the value of elemnt %d is %d\n",i+1,*(ptr+i));
    }

}
int main()
{
    int arr[]={1,2,3,45,66,667,422};
    printarray(arr,7);


    return 0;
}
*/

#include<stdio.h>
void printarray(int ptr[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("the value of elemnt %d is %d\n",i+1,ptr[i]);

    }
    ptr[4]=5533;

}
int main()
{
    int arr[]= {1,2,3,45,66,667,422};
    printarray(arr,7);

    printf("%d",arr[4]);
    return 0;
}














