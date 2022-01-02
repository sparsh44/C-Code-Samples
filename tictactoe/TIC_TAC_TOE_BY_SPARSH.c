#include<stdio.h>
char square[10]= {'0','1','2','3','4','5','6','7','8','9'};
void printer()
{
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);
    printf("     |     |     \n\n");

}


int main()
{
    printf("\"WELCOME TO TIC TAC TOE !\"\n\n");
    printer();

    printf("PLAYER 1 : 'X' AND PLAYER 2 : 'O'\n\n");
    int i,num,a=0;
    for(int j=0; j<5; j++)
    {

        for( i=0; i<2; i++)
        {
            if(j==4 && i==1)
            {
                printf("MATCH DRAW!!");
                break;
            }
            printf("PLAYER %d ENTER A NUMBER : \n",i+1);
            scanf("%d",&num);
            if(i==0)
            {
                square[num]='X';
                printer();
            }
            else
            {
                square[num]='O';
                printer();
            }
            if(     (square[1] == square[2] && square[2] == square[3]) ||
                    (square[4] == square[5] && square[5] == square[6]) ||
                    (square[7] == square[8] && square[8] == square[9])||
                    (square[1] == square[4] && square[4] == square[7]) ||
                    (square[2] == square[5] && square[5] == square[8]) ||
                    (square[3] == square[6] && square[6] == square[9]) ||
                    (square[1] == square[5] && square[5] == square[9]) ||
                    (square[3] == square[5] && square[5] == square[7]) )
            {
                a=1;
                break;

            }
            if(a==1)
            {
                break;
            }

        }
        if(a==1)
        {
            break;
        }
    }
    if(a==1)
    {
        printf("PLAYER %d WON!!",i+1);
    }
    return 0;
}
