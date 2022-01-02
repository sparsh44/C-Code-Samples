
#include<stdio.h>
int times(int *x);
int main()
{
    int a=10;
    printf("the value of a before manipulation is %d\n",a);
    times(&a);
    printf("the value of a after manipulation is %d",a);

    return 0;

}
int times(int *x)
{
  *x=  (*x)*10;

}
/*

#include<stdio.h>
int times(int x);
int main()
{
    int a=10;
    printf("the value of a before manipulation is %d\n",a);
    times(a);
    printf("the value of a after manipulation is %d",a);

    return 0;
                                       //no value change
}
int times(int x)
{
  return x * 10;

}
*/
