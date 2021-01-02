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
    int value, ele;
    char ch;
    // Creating LINKED LIST
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
            tail->next = head;
        }
        printf("Y or N");
        fflush(stdin);
        scanf("%c", &ch);
        }while(ch=='y');
    // Printing LINKED LIST
    temp = head;
    printf("\nThe LINKED LIST : ");
    while(temp->next!=head)
    {
        printf("\t%d", temp->data);
        temp = temp->next;
    }
    printf("\t%d", temp->data);

    new = (struct node *)malloc(sizeof(struct node));
    printf("\n Enter Element ");
    scanf("%d", &ele);
    // Inserting LINKED LIST at BEGINNING
    new->data = ele;
    tail->next = new;
    new->next = head;
    head = new;

    nift = head;
    printf("\nInserting at Begin : ");
    while(nift->next!=head)
    {
        printf("\t%d", nift->data);
        nift = nift->next;
    }
    printf("\t%d", nift->data);
    return 0;
}
