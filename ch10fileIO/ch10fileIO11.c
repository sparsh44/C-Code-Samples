#include<stdio.h>
int main()
{
    char name1[20],name2[20];
    int salary[2];
    printf("ENTER YOUR NAME : ");
    scanf("%s",&name1);
    printf("ENTER YOUR SALARY : ");
    scanf("%d",&salary[0]);
    printf("ENTER YOUR NAME : ");
    scanf("%s",&name2);
    printf("ENTER YOUR SALARY : ");
    scanf("%d",&salary[1]);

    FILE *ptr;
    ptr=fopen("salary.txt","w");
    fprintf(ptr,"%s,%d\n",name1,salary[0]);
    fprintf(ptr,"%s,%d\n",name2,salary[1]);



    return 0;
}

