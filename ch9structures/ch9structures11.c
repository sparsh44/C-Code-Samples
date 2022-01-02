#include<stdio.h>
typedef struct complex
{
    int real ;
    int imaginary;
} cmp;

void display(cmp arr)
{

    printf(" %d + i%d\n",arr.real,arr.imaginary);


}
int main()
{
    cmp complex[5];
    for(int i=0; i<5; i++)
    {
        printf("ENTER THE REAL VALUE OF COMPLEX NUMBER %d\n",i+1);
        scanf("%d",&complex[i].real);
        printf("ENTER THE IMAGINARY VALUE OF COMPLEX NUMBER %d\n",i+1);
        scanf("%d",&complex[i].imaginary);
    }
    for(int i=0; i<5; i++)
    {
        printf("COMPLEX NUMBER %d IS ",i+1);
        display(complex[i]);
    }

    return 0;
}

