#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
};
struct node*create()
{
    int x; printf("\nEnter the value:");
    scanf("%d",&x);
    if(x==0)
    {
        return NULL;
    }
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=x;
    printf("\nEnter the left node of %d",x);
    ptr->left=create();
    printf("\nEnter the right node of %d",x);
    ptr->right=create();
    return ptr;
}
void Inorder(struct node*root)
{
    if(root==NULL)
    {
        return;
    }
    Inorder(root->left);
    printf("%d ",root->data);
    Inorder(root->right);
}
void Preorder(struct node*root)
{
    if(root==NULL)
    {
        return;
    }
    printf("%d ",root->data);
    Preorder(root->left);
    Preorder(root->right);
}
void Postorder(struct node*root)
{
    if(root==NULL)
    {
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    printf("%d ",root->data);
}
int main()
{
    struct node*root=create();
    printf("\nInorder Traversal: ");
    Inorder(root);
    printf("\nPreorder Traversal: ");
    Preorder(root);
    printf("\nPostorder Traversal: ");
    Postorder(root);
}
