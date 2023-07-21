#include<stdio.h>
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
    printf("\n");
}
void peek()
{
    printf("\n The peek element is: %d\n",front->data);
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
        printf("\nEnter the data to push: ");
        int data; scanf("%d",&data);
        if(data>-1)
        {
          push(data);
        }
        else
        {
            a--;
        }
    }
    while(a!=1)
    {
        int choice;
        printf("\n1.Display\n");
        printf("2.Peek\n");
        printf("3.Pop\n");
        printf("4.Exit\n");
        printf("Enter the choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                display();
                break;
            }
        case 2:
            {
                peek();
                break;
            }
        case 3:
            {
                pop();
                break;
            }
        case 4:
            {
                a++;
                break;
            }
        default:
            {
                printf("\nEnter the valid choice\n");
                break;
            }
        }
    }
}
