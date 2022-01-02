#include<stdio.h>
int main()
{   /*
    char str[]="SPARSH SINGH BHATIA";       //array method
    str="mr.sparsh";
    printf("%s",str);
    */

    char *str="SPARSH SINGH BHATIA";    //pointer method works in replacing the characters stored in pointer string but array
                                        //does not
                                        //reinitialisation process happens in pointers
    str="mr.sparsh";
    printf("%s",str);


    return 0;
}


