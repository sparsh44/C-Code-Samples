#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int result(char you,char comp)
{
    if(you==comp)
    {
        return 0;
    }
    if(you=='s' && comp=='g')
    {
        return -1;
    }
    else if(you=='g' && comp=='s')
    {
        return 1;
    }
    if(you=='s' && comp=='w')
    {
        return 1;
    }
    else if(you=='w' && comp=='s')
    {
        return -1;
    }
    if(you=='w' && comp=='g')
    {
        return 1;
    }
    else if(you=='g' && comp=='w')
    {
        return -1;
    }

}

int main()
{
    char you,comp;
    srand(time(0));
    int number=rand()%100 + 1;
    if(number<33)
    {
        comp='s';
    }
    else if(33<number<67)
    {
        comp='w';
    }
    else
    {
        comp='g';
    }
    printf("'s' is for snake,'g' is for gun and 'w' is for water.CHOOSE ONE : ");
    scanf("%c",&you);
    int score=result(you,comp);
    printf("YOU CHOSE %c AND COMPUTER CHOSE %c \n",you,comp);
    if(score==0)
    {
        printf("ITS A DRAW!");
    }
    else if(score==1)
    {
        printf("YOU WON!");

    }
    else
    {
        printf("YOU LOSE!");
    }

    return 0;
}
