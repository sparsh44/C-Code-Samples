/*
*********
 *     *
  *   *
   * *
    *
    */
#include<stdio.h>
int main()
{
    int m;
    for(int i=0; i<5; i++)
    {
        for(m=1; m<(i+1); m++)
        {
            printf(" ");
        }
        for(int j=9; (2*i)<(j); --j)
        {
                if(i!=0){
             if(j==9 || j==(2*i +1))
            {
            printf("*");
            }
            else
            {
                printf(" ");
            }}
            if(i==0)
            {
                printf("*");
            }
            if(j==(2*i + 1))
            {
                printf("\n");
            }
        }
    }


    return 0;
}
