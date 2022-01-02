#include<stdio.h>
int main()
{
    /*  *****
        ****    in reverse order
        ***
        **
        * */
    for(int i=0; i<5; i++)
    {
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

