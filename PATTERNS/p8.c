#include<stdio.h>
int main()
{
    /*
       *****
        ****
         ***
          **
           *
        */

    int m;
    for(int i=0; i<5; i++)
    {
        for(m=1;m<(i+1); m++)
        {
            printf(" ");
        }
        for(int j=5; i<j; --j)
        {

            printf("*");
            if(j==(i+1))
            {
                printf("\n");
            }
        }
    }




    return 0;
}

