#include<stdio.h>
int main()
{
    for(int n=1; n<=4; n++)
    {
        for(int i=0; i<(2*n-1); i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
//to print   *
//           ***
//           *****    using for loop
