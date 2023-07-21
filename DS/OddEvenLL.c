#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*head,*temp,*even,*odd,*m1,*m2;
int main()
{
    for(int i=0;i<5;i++)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        if(head==NULL)
        {
            head=ptr;
            temp=ptr;
        }
        else
        {
            temp->next=ptr;
            temp=ptr;
        }
    }
    struct node*tar,*rat;
    while(temp!=NULL)
    {
        if(temp->data%2==0)
        {
            m1=(struct node*)malloc(sizeof(struct node));
            m1->data=temp->data;
            m1->next=NULL;
            if(even==NULL)
            {
                even=m1;
                tar=m1;
            }
            else
            {
                m1->next=tar;
                tar=m1;
            }
        }
        else
        {
            m2=(struct node*)malloc(sizeof(struct node));
            m2->data=temp->data;
            m2->next=NULL;
            if(odd==NULL)
            {
                odd=m2;
                rat=m2;
            }
            else
            {
                m2->next=rat;
                rat=m2;
            }
        }
        temp=temp->next;
    }
    temp=odd;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
