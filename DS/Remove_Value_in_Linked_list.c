#include <stdio.h>
#include <stdlib.h>
struct ListNode
{
    int val;
    struct ListNode*next;
}*ptr,*head,*t1,*ans;
struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode*newnode,*h1=NULL,*temp,*tail;
    temp=head;
    while(temp!=NULL)
    {
        if(temp->val!=val)
        {
            newnode=(struct ListNode*)malloc(sizeof(struct ListNode));
            newnode->val=temp->val;
            newnode->next=NULL;
            if(h1==NULL)
            {
                h1=newnode;
                tail=newnode;
            }
            else
            {
                tail->next=newnode;
                tail=newnode;
            }
        }
        temp=temp->next;
    }
    return h1;
}
int main()
{
    int size; scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        ptr=(struct ListNode*)malloc(sizeof(struct ListNode));
        scanf("%d",&ptr->val);
        ptr->next=NULL;
        if(head==NULL)
        {
            head=ptr;
            t1=ptr;
        }
        else
        {
            t1->next=ptr;
            t1=ptr;
        }
    }
    ans=removeElements(head,6);
    while(ans!=NULL)
    {
        printf("%d ",ans->val);
        ans=ans->next;
    }
}
