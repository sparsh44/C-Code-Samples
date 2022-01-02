#include<stdio.h>
int main()
{
    /*       *
             **
             ***
             ****
             *****
             ****
             ***
             **
             *     */
             int b=-1;
    int n;
    printf("maximum stars you want are ");
    scanf("%d",&n);
    for(int i=0; i<(2*n-1); i++)
    {  if(n<=i)
    {
        b=b+2;
    }
        if(i<n)
        {


            for(int j=0; j<i+1; j++)
            {
                printf("*");

                if(j==i)
                {
                    printf("\n");
                }
            }
        }
        else
        {
            for(int a=0; a<(i-b); a++)
            {
                printf("*");

                if(a==(i-b-1))
                {
                    printf("\n");
                }
            }
        }
    }

        return 0;
    }

