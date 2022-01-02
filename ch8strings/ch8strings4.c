
#include<stdio.h>
int main()
{
    char str[50];//string of 50 characters
    printf("ENTER YOU NAME : ");
    scanf("%s",str);
    printf("your name is %s",str);
    return 0;
}


/*#include<stdio.h>
int main()
{
    char str[50];//string of 50 characters
    printf("ENTER YOU NAME : ");
    gets(str);    //this will allow spaces between more than one word string
    printf("your name is %s",str);
    return 0;
}


#include<stdio.h>
int main()
{
    char str[50];//string of 50 characters
    printf("ENTER YOU NAME : ");
    gets(str);
    //puts(str);    //this will allow spaces between more than one word string
    printf("your name is %s",str);
    return 0;
}
*/
