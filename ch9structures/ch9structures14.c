#include<stdio.h>
typedef struct date
{
    int year;
    int month;
    int date;
    int hours;
    int minutes;
    int seconds;
}date;

int main()
{
    date d1={13,11,21};

    printf("the date d1 is %d/%d/%d\n",d1.date,d1.month,d1.year);

    return 0;
}

