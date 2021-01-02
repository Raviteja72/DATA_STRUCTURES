#include<stdio.h>
#include<stdlib.h>
int main();

struct node 
{
    int data;
    struct node *next;
}*new, *head, *tail, *temp, *nift, *current, *nexxt, *prev = NULL;

int main(void)
{
    int value;
    char ch; 
    //Creating Linked List
    do 
    {
        new = (struct node *)malloc(sizeof(struct node));
        printf("Enter value : ");
        scanf("%d", &value);
        new->data = value;
        new->next = NULL;
        if(head==NULL)
        {
            head = new;
            tail = new;
        }
        else
        {
            tail->next = new;
            tail = new;
        }
        printf("Y or N : ");
        fflush(stdin);
        scanf("%c", &ch);
        }while(ch=='y');
    new = (struct node *)malloc(sizeof(struct node));
    temp = head;
    printf("The LINKED LIST : ");
    while(temp!=NULL)
    {
        printf("\t%d", temp->data);
        temp = temp->next;
    }
    // Reversing LINKED LIST
    current = head;
    while(current!=NULL)
    {
        nexxt = current->next;
        current->next = prev;
        prev = current;
        current = nexxt;    
    }
    head = prev;

    nift = head;
    printf("\nReversed LINKED LIST : ");
    while(nift!=NULL)
    {
        printf("\t%d", nift->data);
        nift = nift->next;
    }
    return 0;
}
    