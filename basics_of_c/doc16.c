#include<stdio.h>
int main()
{
    printf("%d\n",2&3);   //  AND gate
                        //   2 -->  1 0
                        //   3 ---> 1 1
                        // 2&3 -->  1 0   = 2
    printf("%d\n",2|3);  //2|3 -->  1 1  = 3 OR gate

    printf("%d\n",4<<1);//left shift   1 0 0 becomes 1 0 0 0 =8
    printf("%d\n",4>>1);//right shift  1 0 0 becomes 1 0 =2

    printf("%d\n",~4);  // not clear




    return 0;
}
