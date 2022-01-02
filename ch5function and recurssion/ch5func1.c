#include<stdio.h>

//we are going to name  our functions
void goodmorning();
void goodafternoon();
void goodnight();


int main()
{
//function call that is place where function is to be performed  we can directly type name of the function and it will be performed
goodmorning();
goodafternoon();
goodnight();
return 0;
}
void goodmorning(){printf("good morning\n");}
void goodafternoon(){printf("good afternoon\n");}      //function defination that is task to be performed
void goodnight(){printf("good night\n");}
