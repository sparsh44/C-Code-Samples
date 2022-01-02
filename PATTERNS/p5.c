#include<stdio.h>
int main()
{
    /*  1
        12
        123
        1234
        12345  */
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<(i+1);j++)
        {
            printf("%d",j+1);
            if((j+1)==(i+1))
            {
                printf("\n");
            }
        }
    }



    return 0;
}
