#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 struct node
 {
     char data;
     struct node*next;
 }*ptr,*top,*temp;

 int main()
 {
     int size; scanf("%d",&size);
     char str[40];
     for(int i=0;i<size;i++)
     {
         scanf("%s",str);
         for(int j=strlen(str)-1;j>=0;j--)
         {
             ptr=(struct node*)malloc(sizeof(struct node));
             ptr->data=str[j];
             ptr->next=NULL;
             if(top==NULL)
             {
                 top=ptr;
             }
             else
             {
                 ptr->next=top;
                 top=ptr;
             }
         }
     }
     temp=top;
     while(temp!=NULL)
     {
         printf("%c",temp->data);
         temp=temp->next;
     }
 }
