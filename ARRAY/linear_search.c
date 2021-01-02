#include<stdio.h>

int main();

int main(void)
{
    int A[5], i, ele;
    printf("Enter array of elements : ");
    for(i=0;i<5;i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter searching element");
    scanf("%d", &ele);

    for(i=0;i<5;i++)
    {
        if(A[i]==ele)
        {
            printf("\nElement found in position %d",i);

        }
    }
    return 0;
}