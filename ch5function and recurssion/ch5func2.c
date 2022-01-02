#include<stdio.h>
void change(int a);
int main()
{
int b=4949;
printf("THE VALUE OF b BEFORE CHANGE IS %d\n",b);
change(b);
printf("THE VALUE OF b AFTER CHANGE IS %d\n",b);


//BASICALLY THIS EXPLAINS US THAT WE CAN KEEP ANY TYPE OF NAME OF FUNCTION       CHANGE DOES NOT MEAN IT WILL CHANGE b




return 0;
}
void change(int a)
{ a=22;
printf("the value of a is %d\n",a);
}
