#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
}*ptr,*head,*temp;

int main()
{
    for(int i=1;i<=5;i++)
    {
        ptr = (struct node*)malloc(sizeof(struct node));
        ptr->data = i;
        ptr->next = NULL;
        if(head==NULL)
        {
            head = ptr;
            temp = ptr;
        }
        else
        {
            temp->next = ptr;
            temp = ptr;
        }
    }
    temp->next = head;
    int noOfSwift = 3;
    while(noOfSwift != 0)
    {
        struct node*swift = head;
        do{
            swift = swift->next;
        }while(swift->next != head);
        head = swift;
        noOfSwift--;
    }
    temp = head;
    do
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }while(temp != head);
}
