#include<stdio.h>
int main()
{
    int i=34;
    int *j=&i;

//   * opertator stands for "value at address "       &  operator stands for "address of"
    printf("the value of i is %d\n",i);   //34

    printf("the value of i is %d\n",*j);  //34


    printf("the address of i is %u\n",j);   //a     //  value at address of j= value of j      *(&j)=value ofs j


    printf("the address of i is %u\n",&i);  //a


    printf("the address of j is %u\n",&j);  //b


    printf("the value of j is %u\n",*(&j));  //a



    return 0;
}
