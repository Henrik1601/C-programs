#include <string.h>
#include <stdio.h>
#include <string.h>

struct node
{
    char letter;
    int frequency;
    struct node*next;
}*ptr,*head=NULL,*tail=NULL;

int main()
{
    char str[20];
    gets(str);
    for(int i=0;i<strlen(str);i++)
    {
        int count = 0;
        if(str[i] != '-1')
        {
            ptr=(struct node*)malloc(sizeof(struct node));
            ptr->next = NULL;
            ptr->letter = str[i];
            for(int j=0;j<strlen(str); j++){
                if(str[i]==str[j] && str[j]!=-1){
                    count++;
                    str[j] = '-1';
                }
            }
            ptr->frequency = count;
        }
        if(head == NULL)
        {
            head = ptr;
            tail = ptr;
        }
        else
        {
            tail->next = ptr;
            tail = ptr;
        }
    }
    struct node*temp = head;
    while(temp != NULL)
    {
        printf("%c - %d\n",temp->letter,temp->frequency);
        temp=temp->next;
    }
}
