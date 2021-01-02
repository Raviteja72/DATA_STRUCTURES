#include<stdio.h>
#include<stdlib.h>
int main();

struct node
{
    int data;
    struct node *next;
}*new, *temp, *head, *tail, *nift, *tsla, *init;

int main(void)
{
    int value, ele, i, pos;
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
        if (ch=='n')
        {
            init = new;
        }
        }while(ch=='y');

    new = (struct node *)malloc(sizeof(struct node));
    tsla = head;
    printf("The LINKED LIST : ");
    while(tsla!=NULL)
    {
        printf("\t%d", tsla->data);
        tsla = tsla->next;

    }
    printf("\nEnter position : ");
    scanf("%d", &pos);
    printf("\nEnter element : ");
    scanf("%d", &ele);
    temp = head;
    for(i=0;i<pos-1;i++)
    {
        temp = temp->next;
    }
    new->data = ele;
    new->next = temp->next;
    temp->next = new;
    printf("\n NEW LINKED LIST :  ");
    nift = head;
    while(nift!=NULL)
    {
        printf("\t%d", nift->data);
        nift = nift->next;
    }

    return 0;

}

