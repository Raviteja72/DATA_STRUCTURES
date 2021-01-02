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
    // Deleting at BEGIN
    tsla = head;
    head = head->next;
    tail->next = head;
    tsla->next = NULL;
    free(temp);

    nift = head;
    printf("\n\nAfter Deletion at the BEGINNING  \n\n NEW LINKED LIST : ");
    while(nift->next!=head)
    {
        printf("\t%d", nift->data);
        nift = nift->next;
    }
    printf("\t%d", nift->data);
    return 0;
}