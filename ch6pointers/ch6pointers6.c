#include<stdio.h>
void sumandavg(int a,int b,int *sum, float *average)
{
    *sum=a+b;
    *average=(float)(*sum)/2;
}
int main()
{
    // sum and average of two numbers usinfg pointers and functions
    int a=3,b=6,sum;
    float average;
    sumandavg(a,b,&sum,&average);

    printf("the sum of a and b is %d\n",sum);
    printf("the average of a and b is %f",average);

    return 0;

}

