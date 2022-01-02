#include<stdio.h>

//ARRAYS ARE BASICALLY USED TO REDUCE OUR EFFORT OF TYPING SAME THINGS MULTIPLE TIMES
//  WE CAN SIMPLY DEFINE ONE THING AND USE IT AT MANY PLACES

int main()
{
    int marks[5];   //this is defining 5 integers marks[0],marks[1],marks[2].....marks[4]

    for(int i=0;i<5;i++)
    {
        printf("ENTER THE MARKS OF STUDENT %d :",i+1);
        scanf("%d",&marks[i]);
    }

    for(int i=0;i<5;i++)
    {
        printf("THE VALUE OF MARKS OF STUDENT %d IS %d \n",i+1,marks[i]);
    }



    return 0;
}

