#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*top;
void pop(struct node*top)
{
    top=top->next;
    display(top);
}
void display(struct node*top)
{
    struct node*temp=top;
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    for(int i=0;i<5;i++)
    {
        int index=-1;
        int data; scanf("%d",&data);
        ptr=(struct node*)malloc(sizeof(struct node));
        if(top==NULL)
        {
            ptr->data=data;
            ptr->next=NULL;
            top=ptr;
        }
        else
        {
            ptr->data=data;
            ptr->next=top;
            top=ptr;
        }
        index++;
    }
    pop(top);
}
