#include<stdio.h>
int average(float x,float y,float z);
int main()
{                                          //calculating average using function calls
float a=10,b=6,c=3;
average(a,b,c);



float m=10,n=22 , o=3;
average(m,n,o);
return 0;

}
int average(float x,float y,float z)
{
float average = (x+y+z)/3;
printf("%f\n",average);
return average;
}
