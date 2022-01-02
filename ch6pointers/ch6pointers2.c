#include<stdio.h>
void swap(int *a, int *b);
void wrong_swap(int a, int b);
int main()
{
    int x=3,y=4;
    printf("the value of x and y before swap is %d and %d\n",x,y);

//   wrong_swap(x,y);
// above does not work becaus eof call by value

    swap(&x,&y);   // this works because of call by reference

//  &x,&y    are two addresses and their values are stored in *x and *y that is why they visited swap...

    printf("the value of x and y after swap is %d and %d\n",x,y);
    return 0;
}

void wrong_swap(int a, int b)
{
    int apple;
    apple=a;
    a=b;
    b=apple;



}
void swap(int *a, int *b)
{
    int apple;
    apple=*a;
    *a=*b;
    *b=apple;


}
