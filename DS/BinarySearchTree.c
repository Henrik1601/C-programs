#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*left;
    struct node* right;
}*root;
void inorderTraversal(struct node*root)
{
    if(root==NULL)
    {
        return;
    }
    inorderTraversal(root->left);
    printf("%d ",root->data);
    inorderTraversal(root->right);
}
void constructBinarySearchTree(int num)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=num;
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
            if(num<temp->data)
            {
                if(temp->left==NULL)
                {
                    temp->left=ptr;
                    break;
                }
                else{
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
int main()
{
    int num;
    do
    {
        scanf("%d",&num);
        if(num>0)
        {
            constructBinarySearchTree(num);
        }
    }while(num>0);
    inorderTraversal(root);
}
