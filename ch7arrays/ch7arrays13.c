#include<stdio.h>
void printtable(int *multi,int n,int num)
{
    printf("the multiplication table of %d is :\n",num);
    for(int i=0; i<n; i++)
    {
        multi[i]=(i+1)*num;
        printf("%d X %d = %d\n",num,i+1,multi[i]);
    }
    printf("*********************\n\n");
}
int main()

{
    int multi[3][10];

    printtable(multi[0],10,2);
    printtable(multi[1],10,7);
    printtable(multi[2],10,9);
    return 0;
}


