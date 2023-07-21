#include <stdio.h>
#include <stdlib.h>
struct ListNode
{
    int val;
    struct ListNode*next;
}*ptr,*head,*tail,*newnode;
void reorderList(struct ListNode* head){
   struct ListNode*temp,*newnode,*h1,*t1;
   int count=0;
   temp=head->next;
   while(temp!=NULL)
   {
          newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
          newnode->val=temp->val;
          newnode->next=NULL;
          if(h1==NULL)
          {
              h1=newnode;
              t1=newnode;
          }
          else
          {
              newnode->next=h1;
              h1=newnode;
          }
      temp=temp->next;
   }
   t1->next=NULL;
   head->next=h1;
   temp=h1;
   while(temp!=NULL)
   {
       printf("%d ",temp->val);
       temp=temp->next;
   }
}
int main()
{
    for(int i=0;i<5;i++)
    {
        ptr=(struct ListNode*)malloc(sizeof(struct ListNode));
        scanf("%d",&ptr->val);
        ptr->next=NULL;
        if(head==NULL)
        {
            head=ptr;
            tail=ptr;
        }
        else
        {
            tail->next=ptr;
            tail=ptr;
        }
    }
    reorderList(head);
}
