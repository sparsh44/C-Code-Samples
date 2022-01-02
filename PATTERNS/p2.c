#include<stdio.h>
int main()
{
    // if we want a square
    int n;
    printf("enter the number of lines you want = ");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n;j++)
        {
            printf("* ");
            if(j==(n-1))
            {
                printf("\n");
            }
        }
    }

    return 0;
}


