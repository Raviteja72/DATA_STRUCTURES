#include<stdio.h>
#include<stdlib.h>
int main();

struct node 
{
    int data;
    struct node *next;
}*new, *head, *tail, *temp, *nift;

int main(void)
{
    int value, count=0;
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
    
    temp = head;
    printf("The LINKED LIST : ");
    //Counting nodes
    while(temp!=NULL)
    {
        count++;
        printf("\t%d", temp->data);
        temp = temp->next;
    }
    printf("\n NO OF NODES : %d", count);
    return 0;
}