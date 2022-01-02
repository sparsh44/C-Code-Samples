#include<stdio.h>
typedef struct date
{
    int year;
    int month;
    int date;
}date;

int datecmp(date d1,date d2)
{
    if(d1.year>d2.year)
    {
        return 1;
    }
    if(d1.year<d2.year)
    {
        return -1;
    }
    if(d1.month>d2.month)
    {
        return 1;
    }
    if(d1.month<d2.month)
    {
        return -1;
    }
    if(d1.date>d2.date)
    {
        return 1;
    }
    if(d1.date<d2.date)
    {
        return -1;
    }
    else{
    return 0;
    }
}

int main()
{
    date d1={13,11,21};
    date d2={12,12,12};
    printf("the date d1 is %d/%d/%d\n",d1.date,d1.month,d1.year);
    printf("the date d2 is %d/%d/%d\n",d2.date,d2.month,d2.year);
    int a=datecmp(d1,d2);
    printf("THE DATE COMPARISON RESULT IS :%d",a);
    return 0;
}
