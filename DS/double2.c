 #include <stdio.h>
 #include <stdlib.h>
 struct node
 {
   int data;
   struct node*prev;
   struct node*next;
   int key;
 }*ptr,*head,*tail,*change;

 void main()
 {
   int num;
   scanf("%d",&num);
   int key=1;
   for(int i=0;i<num;i++)
   {
     ptr=(struct node*)malloc(sizeof(struct node));
     scanf("%d",&ptr->data);
     ptr->prev=NULL;
     ptr->next=NULL;
     ptr->key=key++;
     if(head==NULL)
     {
       head=ptr;
       tail=ptr;
     }
     else
     {
       tail->next=ptr;
       ptr->prev=tail;
       tail=ptr;
     }
   }
   int index; scanf("%d",&index);
   struct node*temp=head;
   temp=head;
   int opp=0;
   int inin=0;
   while(temp!=NULL)
   {
     if(temp->data==index)
     {
       inin=temp->key;
       opp=num-(temp->key)+1;
     }
     temp=temp->next;
   }
   temp=head;
   int newopp=0;
   while(temp!=NULL)
   {
     if(temp->key==opp)
     {
       newopp=temp->data;
       temp->data=index;
     }
     temp=temp->next;
   }
   temp=head;
   while(temp!=NULL)
   {
     if(temp->key==inin)
     {
       temp->data=newopp;
     }
   }
   temp=head;
   while(temp!=NULL)
   {
       printf("%d ",temp->data);
       temp=temp->next;
   }
 }
