#include<stdio.h>
#include<stdlib.h>
int main();

struct node
{
    int data;
    struct node *next;
}*new, *head, *tail, *temp, *nift, *tsla;

int main(void)
{
    int value;
    char ch;
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
        printf(" Y or N : ");
        fflush(stdin);
        scanf("%c", &ch);
        }while(ch=='y');
    temp = head;
    printf("The LINKED LIST :  ");
    while(temp!=NULL)
    {
        printf("\t%d", temp->data);
        temp = temp->next;
    }
    printf("\nAFTER DELETION AT THE ENDING : ");
    tsla = head;
    while(tsla->next!=tail)
    {
        tsla = tsla->next;
    }
    tsla->next = NULL;
    tail = tsla;
    
    nift = head;
    while(nift!=NULL)
    {
        printf("\t%d", nift->data);
        nift = nift->next;
    }
    return 0;
}