#include<stdio.h>
float fahrenhite(float celcius);
int main()
{
    float celcius =37;
    fahrenhite(celcius);

//celcius to fahrenhite


    return 0;
}
float fahrenhite(float celcius)
{
    float temp;
    temp=9.0/5.0*celcius  + 32;
    printf("TEMPRATURE IN FAHRENHITE IS %f",temp);
    return temp;
}
