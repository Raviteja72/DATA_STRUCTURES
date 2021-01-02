#include<stdio.h>
int main();

int main(void)
{
    int A[5], i, j, temp;
    printf("Enter 5 array of elements");
    for(i=0;i<5;i++)
    {
        scanf("%d", &A[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            if (A[j] > A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    
    for(i=0;i<5;i++)
    {
        printf("\t%d", A[i]);
    }
    return 0;
}