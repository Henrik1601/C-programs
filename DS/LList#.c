#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*ptr,*head,*temp;

int main()
{
    for(int i=0;i<4;i++)
    {
        ptr = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->next = NULL;
        if(head==NULL)
        {
            head = ptr;
            temp = ptr;
        }
        else
        {
            temp->next = ptr;
            temp = ptr;
        }
    }
    temp = head;
    struct node *top=NULL;
    while(temp!=NULL)
    {
        struct node *stack = (struct node*)malloc(sizeof(struct node));
        stack->data = temp->data;
        stack->next = NULL;
        if(top==NULL)
        {
            top = stack;
        }
        else
        {
            stack->next = top;
            top = stack;
        }
        temp = temp->next;
    }

    temp = top;
    int reverseIndex;
    printf("Enter the Index Value: ");
    scanf("%d",&reverseIndex);
    int count = 1;
    while(temp!=NULL)
    {
        if(count == reverseIndex)
        {
            printf("%d ",temp->data);
        }
        count++;
        temp = temp->next;
    }
}
