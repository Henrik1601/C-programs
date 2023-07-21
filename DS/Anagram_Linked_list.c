#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    char data;
    struct node*next;
}*ptr,*head,*tail,*temp,*h1,*t1;

int main()
{
    int arr[5]={'a','b','c','d','e'};
    int size; scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        ptr=(struct node*)malloc(sizeof(struct node)+8);
        ptr->data=arr[i];
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
    temp=head;
    while(temp!=NULL)
    {
        printf("%c ",temp->data);
        temp=temp->next;
    }
}
