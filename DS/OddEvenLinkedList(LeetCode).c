#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
}*ptr,*head,*temp;
struct node* oddEvenList(struct node* root)
{
   struct node*newnode=NULL,*oHead=NULL,*oTail=NULL,*eHead=NULL,*eTail=NULL;
   while(root!=NULL)
   {
       newnode=(struct node*)malloc(sizeof(struct node));
       newnode->data=root->data;
       newnode->next=NULL;
       if(root->data%2!=0)
       {
           if(oHead==NULL)
           {
               oHead=newnode;
               oTail=newnode;
           }
           else
           {
               oTail->next=newnode;
               oTail=newnode;
           }
       }
       else
       {
           if(eHead==NULL)
           {
               eHead=newnode;
               eTail=newnode;
           }
           else
           {
               eTail->next=newnode;
               eTail=newnode;
           }
       }
       root=root->next;
   }
   oTail->next=eHead;
   return oHead;
}
int main()
{
    for(int i=0;i<5;i++)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=i+1;
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
    struct node*newHead=oddEvenList(head);
    while(newHead!=NULL)
    {
        printf("%d ",newHead->data);
        newHead=newHead->next;
    }
}
