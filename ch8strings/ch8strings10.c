#include<stdio.h>
#include<string.h>
int main()
{
    char st1[34];
    char st2[34];
    int i=0;
    char c;
    printf("ENTER THE VALUE OF FIRST STRING ");
    scanf("%s",st1);    //using %s method

    printf("ENTER THE VALUE OF SECND STRING CHARACTER BY CHARACTER \n");

    while(c!='\n')
    {
        fflush(stdin);
        scanf("%c",&c);
        st2[i]=c;
        i++;
    }
    st2[i-1]='\0';

    printf("the vale of st1 is %s\n",st1);
    printf("the vale of st2 is %s\n",st2);







    return 0;
}

