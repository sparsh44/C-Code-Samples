#include<stdio.h>
#include<string.h>

typedef struct account
{
    int account_no;
    char name[20];
    int mobile_no;
    float balance;

}acc;
int main()
{
    acc e1;
    printf("ENTER THE ACCOUNT NUMBER :");
    scanf("%d",&e1.account_no);

    printf("\nENTER THE NAME :");

    scanf("%s",&e1.name);

    printf("\nENTER THE MOBILE NUMBER :");
    scanf("%d",&e1.mobile_no);

    printf("%s",e1.name);
    return 0;
}
