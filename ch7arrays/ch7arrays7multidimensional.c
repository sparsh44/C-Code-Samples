#include<stdio.h>
int main()
{
    int students=3;
    int subjects=5;
    int marks[3][5];  //two dimensional array
    for(int i=0;i<3;i++)
    {
            for(int j=0;j<5;j++)
            {printf("ENTER THE MARKS OF STUDENT %d IN SUBJECT %d\n",i+1,j+1);
            scanf("%d",&marks[i][j]);}


    }
    for(int i=0;i<3;i++)
    {
            for(int j=0;j<5;j++)
            printf("THE MARKS OF STUDENT %d IN SUBJECT %d ARE %d\n",i+1,j+1,marks[i][j]);



    }


    return 0;
}
