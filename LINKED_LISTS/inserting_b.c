#include<stdio.h>
#include<stdlib.h>
int main();

struct node
{
    int data;
    struct node *next;
}*new, *temp, *head, *tail, *nift;

int main(void)
{
    int value, ele;
    char ch;
    do
    {
        new = (struct node *)malloc(sizeof(struct node));
        printf("Enter value : ");
        scanf("%d", &value);
        new->data = value;
        new->next = NULL;
        if (head==NULL)
        {
            head=new;
            tail=new;
        }
        else
        {
            tail->next = new;
            tail=new;
        }

        printf("Y or N : ");
        fflush(stdin);
        scanf("%c", &ch);
        }while(ch=='y');

    temp = head;
    printf("The LINKED LIST : ");
    while(temp!=NULL)
    {
        printf("\t%d", temp->data);
        temp = temp->next;
    }
    new = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter element : ");
    scanf("%d", &ele);
    
    new->data = ele;
    new->next = head;
    head = new;

    nift = head;
    printf("\n NEW LINKED LIST :  ");
    while(nift!=NULL)
    {
        printf("\t%d", nift->data);
        nift = nift->next;
    }

    return 0;

}

