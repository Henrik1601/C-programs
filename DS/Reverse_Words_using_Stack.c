#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    char data;
    struct node*next;
}*ptr,*top,*tail,*newnode,*temp,*t1;
struct node *create(char arr[])
{
     for(int j=0;j<strlen(arr);j++)
       {
           ptr=(struct node*)malloc(sizeof(struct node));
           ptr->data=arr[j];
           ptr->next=NULL;
           if(top==NULL)
           {
             top=ptr;
             tail=ptr;
           }
           else
           {
              ptr->next=top;
              top=ptr;
           }
       }
       temp=top;
       tail=NULL;
       while(temp!=NULL)
       {
           newnode=(struct node*)malloc(sizeof(struct node));
           newnode->data=ptr->data;
           newnode->next=NULL;
           if(t1==NULL)
           {
             t1=newnode;
             tail=newnode;
           }
           else
           {
              newnode->next=t1;
              t1=newnode;
           }
           temp=temp->next;
       }
       return t1;
}
int main()
{
    int size; scanf("%d",&size);
       char arr[50]; gets(arr);
       struct node*h1=create(arr);
   temp=h1;
   while(temp!=NULL)
   {
       printf("%c ",temp->data);
       temp=temp->next;
   }
}
