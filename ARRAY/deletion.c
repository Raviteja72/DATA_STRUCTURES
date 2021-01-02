#include<stdio.h>
int main();

int main(void)
{
    int A[5], i, pos;
    printf("Enter 5 array of elements : ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("\nEnter position value : ");
    scanf("%d", &pos);
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("\t%d", A[i]);
    }
    printf("\n%d\n",pos);
    for(i=pos;i<4;i++)
    {
        A[i] = A[i+1];
    }
    for(i=0;i<4;i++)
    {
        printf("\t%d", A[i]);
    }
    return 0;
}