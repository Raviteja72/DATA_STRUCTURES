#include<stdio.h>
#include<stdlib.h>
int main();

struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*new, *head, *tail, *temp, *nift, *tsla, *stok;

int main(void)
{
    int value, pos, i;
    char ch;
    // Deleting node at specific position
    do
    {
        new = (struct node *)malloc(sizeof(struct node));
        printf("Enter value : ");
        scanf("%d", &value);
        new->data = value;
        new->prev = NULL;
        new->next = NULL;
        if(head==NULL)
        {
            head = new;
            tail  = new;
        }
        else
        {
            tail->next = new;
            new->prev = tail;
            tail = new;
        }
        printf("Y or N : ");
        fflush(stdin);
        scanf("%c", &ch);
        }while(ch=='y');
    new = (struct node *)malloc(sizeof(struct node));
    temp = head;
    printf("\nTHE LINKED LIST : ");
    while(temp!=NULL)
    {
        printf("\t%d", temp->data);
        temp = temp->next;
    }
    printf("\nEnter position : ");
    scanf("%d", &pos);
    // Deleting at the specific position 
    nift = head;
    for(i=0;i<pos-1;i++)
    {
        nift = nift->next;
        nift->next = nift->next->next;
    }
    nift->next->prev = nift;

    tsla = head;
    printf("\nAFTER DELETION AT SPECIFI POSITION \n NEW LINKED LIST : ");
    while(tsla!=NULL)
    {
        printf("\t%d", tsla->data);
        tsla = tsla->next;
    }
    return 0;
    
}