#include<stdio.h>
int main()
{
    /*
    *********0
     ******* 1
      *****  2
       ***   3
        *    4

      */
    int m;
    for(int i=0; i<5; i++)
    {
        for(m=1; m<(i+1); m++)
        {
            printf(" ");
        }
        for(int j=9; (2*i)<j; --j)
        {
            printf("*");
            if(j==(2*i +1))
            {
                printf("\n");
            }
        }
    }



    return 0;
}

