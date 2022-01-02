#include<stdio.h>
int main()
{
    int marks[4];
    int *ptr=&marks[0];
    // second way of writing above is
    //  int *ptr  ptr=marks;

    for(int i=0;i<4;i++)
    {

        printf("ENTER THE MARKS OF STUDENT %d :\n",i+1);
        scanf("%u",ptr);    //  address par scanf
        ptr++;
    }
    for(int i=0;i<4;i++)
    {
        printf("the marks entered for student %d are %d\n",i+1,marks[i]);

    }

    return 0;
}
