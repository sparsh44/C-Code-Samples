#include<stdio.h>
int main()
{
    int a,b,sum,diff,product,quotient,remainder;


    printf("ENTER a=");
    scanf("%d",&a);
    printf("ENTER b=");

    scanf("%d",&b);
    sum= a+b;
    printf("sum=%d\n",sum);
    diff=a-b;
    printf("diff=%d\n",diff);
    product=a*b;
    printf("product=%d\n",product);
    float division;
    division=(float)a/(float)b;
    printf("division=%.2f\n",division);

    quotient=a/b;
    printf("quotient=%d\n",quotient);

    remainder = a%b;
    printf("remainder =%d",remainder);

}
