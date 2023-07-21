#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*front=NULL,*rear=NULL,*temp;
void push(int data)
{
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=NULL;
    if(front==NULL)
    {
        front=ptr;
        rear=ptr;
    }
    else
    {
        rear->next=ptr;
        rear=ptr;
    }
}
void display()
{
    temp=front;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
void peek()
{
    printf("%d\n",front->data);
}
void pop()
{
    front=front->next;
}
int main()
{
    int a=1;
    while(a!=0)
    {
        int choice; printf("\nEnter the choice:\n");
        printf("1. push\n");
        printf("2. Display\n");
        printf("3. Pop\n");
        printf("4. Peek\n");
        printf("5. Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                printf("\nEnter the data:");
                int num; scanf("%d",&num);
                push(num);
                break;
            }
        case 2:
            {
                display();
                break;
            }
        case 3:
            {
                pop();
                break;
            }
        case 4:
            {
                peek();
                break;
            }
        case 5:
            {
                a--;
                break;
            }
        default:
            {
                printf("Enter the valid choice\n");
                break;
            }
        }
    }
}
