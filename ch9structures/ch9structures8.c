#include<stdio.h>
struct vector{
    int x;
    int y;
};
int main()
{
    struct vector v1,v2;
    v1.x=30;
    v1.y=40;
    v2.x=50;
    v2.y=10;

    printf("the x dim and y dim in v1 are %d and %d respectively\n",v1.x,v1.y);
    printf("the x dim and y dim in v2 are %d and %d respectively",v2.x,v2.y);



    return 0;
}
