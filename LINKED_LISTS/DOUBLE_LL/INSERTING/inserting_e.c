#include<stdio.h>
#include<stdlib.h>
int main();
 struct node
 {
     struct node *prev;
     int data;
     struct node *next;
 }*new, *head, *tail, *temp, *nift;

 int main(void)
 {
     int value, ele;
     char ch;
     // Creating DOUBLE LINKED LIST
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
            tail = new;
        }
        else
        {
            tail->next = new;
            tail = new;
            new->prev = tail;
        }
        printf("Y or N : ");
        fflush(stdin);
        scanf("%c", &ch);
        }while(ch=='y');

    temp = head;
    printf("\nThe LINKED LIST : ");
    while(temp!=NULL)
    {
        printf("\t%d", temp->data);
        temp = temp->next;
    }
    // INSERTING NODE AT THE END
    new = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter Element : ");
    scanf("%d", &ele);
    new->data = ele;
    new->prev = tail;
    new->next = NULL;
    tail->next = new;
    tail = new;

    nift = head;
    printf("AFTER INSERTING AT ENDING \n NEW LINKED LIST : ");
    while(nift!=NULL)
    {
        printf("\t%d", nift->data);
        nift = nift->next;
    }
    return 0;
 }