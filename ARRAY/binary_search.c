#include<stdio.h>

int main();

int main(void)
{
    int A[5] = {1,2,3,4,5};
    int mid, low=0, high=4, ele=3, flag=0;
    while(low<high)
    {
        mid = (low+high)/2;
        if(ele==A[mid])
        {
            flag=1;
            break;
        }
        else if(ele<A[mid])
        {
            high = mid-1;
        }
        else
        {
            low=mid+1;
        }
    } 
    if (flag==1)
    {
        printf("\nElement is found");
    }
    else
    {
        printf("Element not found");
    }
    
    return 0;
}