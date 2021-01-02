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
    int value, ele, pos, i;
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
    printf("\n\nEnter Position and Element : ");
    scanf("%d%d", &pos, &ele);
    // Inserting at PARTICULAR POSITION
    new->data = ele;
    nift = head;
    for(i=0;i<pos-1;i++)
    {
        nift = nift->next;
    }
    new->next = nift->next;
    nift->next = new;

    tsla = head;
    printf("\nInserting at a SPECIFIC POSITION : \n");
    printf("\t\t");
    while(tsla->next!=head)
    {
        printf("\t%d", tsla->data);
        tsla  = tsla->next;
    }
    printf("\t%d", tsla->data);
    return 0;
}