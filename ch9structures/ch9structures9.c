#include<stdio.h>
struct vector{
    int x;
    int y;
};
struct vector sumvector(struct vector v1,struct vector v2)
{
    struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
int main()
{
    struct vector v1,v2,sum;
    v1.x=30;
    v1.y=40;
    v2.x=50;
    v2.y=10;

    printf("the x dim and y dim in v1 are %d and %d respectively\n",v1.x,v1.y);
    printf("the x dim and y dim in v2 are %d and %d respectively\n",v2.x,v2.y);

    sum=sumvector(v1,v2);
    printf("the x dim and y dim of result are %d and %d respectively\n",sum.x,sum.y);

    return 0;
}

