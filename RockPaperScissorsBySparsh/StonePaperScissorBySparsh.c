#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    char you,comp;
    int num;
    srand(time(0));
    num=rand()%100 + 1 ;

    if(num<33)
    {
        comp='r';
    }
     if(33<num && num<67)
    {
        comp='s';
    }
    if(67<num)
    {
        comp='p';
    }
    printf("WELCOME TO ROCK PAPER SCISSORS!!\n\n");
    printf("'R' FOR ROCK , 'P' FOR PAPER AND 'S' FOR SCISSORS... CHOOSE ONE : ");
    scanf("%c",&you);
    printf("COMPUTER CHOSE %c AND YOU CHOSE %c \n\n",comp,you);
    if(comp==you)
    {
        printf("DRAW");
        return;
    }
    if(comp=='r' && you=='p' || comp=='s' && you=='r' || comp=='p' && you =='s')
    {
        printf("YOU WON!!");
    }
    else
    {
        printf("YOU LOST");
    }




    return 0;
}




//rock paper se haar jata hai
//rock scissors se jeet jata hai
//scissors paper se jeet jata hai
