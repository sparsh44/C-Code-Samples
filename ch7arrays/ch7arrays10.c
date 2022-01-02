#include<stdio.h>
int main ()
{
    int multi[10];
    int n;
        printf("ENTER n");
        scanf("%d",&n);
        printf("%d\n",multi[5]);   // 0 is the default value

    for(int i=0;i<10;i++)
    {
        multi[i]=(i+1) * n;
        printf("%d X %d = %d\n",n,i+1,multi[i]);
    }

    printf("%d",multi[5]);
    return 0;
}
