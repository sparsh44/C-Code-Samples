/*  *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
    */
#include<stdio.h>
int main()
{
    int a=0;
    for(int i=0; i<9; i++)
    {
        for(int m=4; i<m; --m)
        {
            printf(" ");
        }
        if(i<5)
        {
            a++;
            if(i==0)
            {
                for(int j=0; j<(2*i+1); j++)
                {
                    printf("*");
                    if(j==(2*i))
                    {
                        printf("\n");
                    }
                }
            }
            if(i!=0)
            {
                for(int j=0; j<(2*i+1); j++)
                {
                    if(j==0 || j==(2*i))
                    {
                        printf("*");
                        if(j==(2*i))
                        {
                            printf("\n");
                        }
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
        }
        else
        {
            for(int n=0; n<(i-a+1); n++)
            {
                printf(" ");
            }
            for(int j=7; (2*(i-a))<j; --j)
            {
                if(j==7 || j==(2*(i-a)+1))
                {

                    printf("*");
                    if((2*(i-a)+1)==j)
                    {
                        printf("\n");
                    }
                }
                else
                {
                    printf(" ");
                }
            }
        }

    }



    return 0;
}
