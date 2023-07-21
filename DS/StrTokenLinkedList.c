#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    char *string;
    struct node*next;
}*ptr,*top,*temp;
int main()
{
    char str[100];
    gets(str);
    char *word;
    word=strtok(str," ");
    while(word!=NULL)
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        ptr->string=word;
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
        word=strtok(NULL," ");
    }
    temp=top;
    do
    {
        printf("%s ",temp->string);
        temp=temp->next;
    }while(temp!=NULL);
}
