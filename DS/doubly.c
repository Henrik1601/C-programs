#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node*prev;
	struct node*next;
}*ptr,*head,*tail,*temp,*even,*evenhead,*eventail,*eventemp;
int main(){
	int num;
	scanf("%d", &num);              	                  // Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
	for(int i=0;i<num;i++)
	{
       ptr=(struct node*)malloc(sizeof(struct node));
	   int data;
	   scanf("%d",&ptr->data);
	   ptr->next=NULL;
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
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data%2==0)
		{
           even=(struct node*)malloc(sizeof(struct node));
           even->data=temp->data;
		   even->prev=NULL;
		   even->next=NULL;
		   if(evenhead==NULL)
		   {
			   evenhead=even;
			   eventail=even;
		   }
		   else
		   {
			   eventail->next=even;
			   even->prev=eventail;
			   eventail=even;
		   }
		   if(temp->next->data%2!=0)
		   {
			   eventemp=eventail;
			   while(eventemp!=NULL)
			   {
				   printf("%d ",even->data);
				   eventemp=eventemp->prev;

			   }
		   }
		}
		else
		{
			printf("%d ",temp->data);
		}
		temp=temp->next;
	}
}
