#include<stdio.h>
int main()

    /* //to print address of elements of a three dim array
     int arr[2][3][4];
     for(int i=0;i<2;i++)
     {
         for(int j=0;j<3;j++)
         {
             for(int k=0;k<4;k++)
                 {
                     printf("the address of %d %d %d is %u\n",i,j,k,&arr[i][j][k]);
                 }
         }
     }
    //these addresses are laid down in increasing order

*/

    int arr[2][3][4];
     for(int i=1;0<=i;--i)
     {                           //these are addresses in decreasing reverse order
         for(int j=2;0<=j;--j)
         {
             for(int k=3;0<=k;--k)
                 {
                     printf("the address of %d %d %d is %u\n",i,j,k,&arr[i][j][k]);
                 }
         }
     }
     return 0;
    }

