#include<stdio.h>
int main();

int main(void)
{
    int A[5], i, pos, ele;
    printf("Enter 5 array of elements : ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("\nEnter position and element values : ");
    scanf("%d%d", &pos, &ele);

    for(i=0;i<5;i++)
    {
        printf("\t%d", A[i]);
    }
    printf("\n%d%d",pos, ele);
    for(i=4;i<=pos;i--)
    {
        A[i+1] = A[i];
    }
    A[pos] = ele;
    for(i=0;i<5;i++)
    {
        printf("\t%d", A[i]);
    }
    return 0;
}