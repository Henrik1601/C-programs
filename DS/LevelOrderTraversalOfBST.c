#include <stdio.h>
#include <stdlib.h>
int length=0;
 struct node
 {
     int data;
     struct node*left;
     struct node*right;
 }*root;

 void constructBST(int data)
 {
     struct node*ptr=(struct node*)malloc(sizeof(struct node));
     ptr->data=data;
     ptr->left=NULL;
     ptr->right=NULL;
     if(root==NULL)
     {
         root=ptr;
     }
     else
     {
         struct node*temp=root;
         while(1)
         {
             if(data<temp->data)
             {
                 if(temp->left==NULL)
                 {
                     temp->left=ptr;
                     break;
                 }
                 else
                 {
                     temp=temp->left;
                 }
             }
             else
             {
                 if(temp->right==NULL)
                 {
                     temp->right=ptr;
                     break;
                 }
                 else
                 {
                     temp=temp->right;
                 }
             }
         }
     }
 }
struct queueNode
{
    int data;
    struct node* next;
    struct node* queueNext;
}*q,*tail;

 void size(struct node* root)
 {
     if(root==NULL) return;
     size(root->left);
     length++;
     size(root->right);
 }

 struct queueNode * queueInsert(struct node * root)
 {
     struct queueNode *ptr=(struct queueNode*)malloc(sizeof(struct queueNode));
     ptr->data=root->data;
     ptr->queueNext=NULL;
     if(q==NULL)
     {
         q=root;
         tail=root;
     }
     else
     {
         tail->queueNext=ptr;
         tail=ptr;
     }
     return q;
 }

 struct queueNode * remove(struct queueNode* q)
 {
     struct queueNode *temp=q;
     q=q->queueNext;
     return temp;
 }

 int arr[length];

void noOfNodes(struct node * root)
{
    int index=0;
    queueInsert(root);
    struct queueNode * queue=q;
    while(queue!=NULL)
    {
        int queueSize=0;
        struct node *counter=q;
        while(counter!=NULL)
        {
            queueSize++;
            counter=counter->next;
        }
        for(int i=0;i<queueSize;i++)
        {
            struct queueNode* temp=remove(q);
            arr[index++]=temp->data;
            if(temp->left!=NULL)
            {
                queueInsert(temp->left);
            }
            if(temp->right!=NULL)
            {
                queueInsert(temp->right);
            }
        }
        queue=queue->next;
    }
}

 int main()
 {
     int data;
     do
     {
         printf("Enter the data: ");
         scanf("%d",&data);
         if(data>0)
         {
             constructBST(data);
         }
     }while(data>0);
     size(root);
     printf("\n%d ",length);
     noOfNodes(root);
     printf("\n");
     for(int i=0;i<length;i++){
        printf("%d ",arr[i]);
     }
 }
