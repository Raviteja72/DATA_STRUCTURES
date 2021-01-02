#include<stdio.h>
#include<stdlib.h>
int main();
struct node *static_LL(int num); 
struct node
{
    int data;
    struct node *next;
}*new, *head, *tail, *tsla, *nafa;
int main(void)
{
    tsla = static_LL(10);
    while(tsla!=NULL)
    {
        printf("\t%d", tsla->data);
        tsla  = tsla->next;
    }
    return 0;
}
struct node *static_LL(int num) {
    int A[num], i;
    for (i=0; i<num; i++)
    {
        nafa = (struct node *)malloc(sizeof(struct node));
        nafa->data = i;
        nafa->next = NULL;
        if(head==NULL)
        {
            head = nafa;
            tail = nafa;
        }
        else
        {
            tail->next = nafa;
            tail = nafa;
        }
    }
    return head;
}