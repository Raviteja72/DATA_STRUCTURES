#include<stdio.h>
#include<stdlib.h>
int main();

struct node
{
    struct node *prev;
    int data;
    struct node *next;
}*new, *head, *tail, *temp, *nift, *tsla;

int main(void)
{
    int value;
    char ch;
    // Deleting node at the beginning
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

    temp = head;
    printf("\nTHE LINKED LIST : ");
    while(temp!=NULL)
    {
        printf("\t%d", temp->data);
        temp = temp->next;
    }
    // Deleting at the beginning 
    nift = head;
    head = head->next;
    head->prev = NULL;
    nift->next = NULL;

    tsla = head;
    printf("\nAFTER DELETION AT THE BEGINNING \n NEW LINKED LIST : ");
    while(tsla!=NULL)
    {
        printf("\t%d", tsla->data);
        tsla = tsla->next;
    }
    return 0;
    
}