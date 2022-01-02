#include<stdio.h>
int main()
{
    /*
        *4
       **3
      ***2
     ****1
    *****0
        */

    int m;
    for(int i=0; i<5; i++)
    {
        for(m=4; i<m; --m)
        {
            printf(" ");
        }
        for(int j=0; j<(i+1); j++)
        {

            printf("*");
            if(j==i)
            {
                printf("\n");
            }
        }
    }




    return 0;
}
