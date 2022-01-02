  /*
    *
   * *
  *   *
 *     *
*********
      */
#include<stdio.h>
int main()
{
    int m;
    for(int i=0; i<5; i++)
    {
        for(m=4; i<m; --m)
        {
            printf(" ");
        }
        for(int j=0; j<(2*i+1); j++)
        {
                if(i!=4){
             if(j==0 || j==(2*i))
            {
            printf("*");
            }
            else
            {
                printf(" ");
            }}
            if(i==4)
            {
                printf("*");
            }
            if(j==(2*i))
            {
                printf("\n");
            }
        }
    }


    return 0;
}
