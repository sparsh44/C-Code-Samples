/*#include<stdio.h>
void reverse(int *arr,int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    for(int i=0;i<7;i++)
    {
        printf("the value of element %d before reversing is %d\n",i+1,arr[i]);
    }

    reverse(arr,7);
    for(int i=0;i<7;i++)
    {
        printf("the value of element %d afetr reversing is %d\n",i+1,arr[i]);
    }

    return 0;
}*/
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    scanf("%s",str);
    int a=strlen(str);
    int i=0;int j=(a-1);
    for(;i<=(a/2),(a/2)<=j;i++,--j)
    {
        if(str[i]!=str[j])
        {
            printf("NO");
            return 0;
        }
    }


	printf("YES");
}
