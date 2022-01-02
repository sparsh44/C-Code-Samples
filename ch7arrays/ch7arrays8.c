#include<stdio.h>
int main()
{
    int input[3][2];
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("ENTER THE ROW: %d AND COLUMN: %d\n",i+1,j+1);
            scanf("%d",&input[i][j]);
        }


    }
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d ",input[i][j]);
            if(j==1)
            {
                printf("\n");
            }

        }


    }


    return 0;
}
