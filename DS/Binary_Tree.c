#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
};
struct node*create()
{
    int x;
    printf("\nEnter the data:");
    scanf("%d",&x);
    struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(x==-1){
        return NULL;
    }
    ptr->data=x;
    printf("\nEnter the left node of %d",x);
    ptr->left=create();
    printf("\nEnter the right node of %d",x);
    ptr->right=create();
    return ptr;
}
void Preorder(struct node*root)
{
    if(root==NULL){
        return ;
    }
    printf("%d ",root->data);
    Preorder(root->left);
    Preorder(root->right);
}
void Inorder(struct node*root)
{
    if(root==NULL)
    {
        return ;
    }
    Inorder(root->left);
    printf("%d ",root->data);
    Inorder(root->right);
}
void Postorder(struct node*root)
{
    if(root==NULL)
    {
        return ;
    }
    Postorder(root->left);
    Postorder(root->right);
    printf("%d ",root->data);
}
int main()
{
    struct node*root;
    root=create();
    printf("\nPreorder Traversal\n");
    Preorder(root);
    printf("\nInorder Traversal\n");
    Inorder(root);
    printf("\nPostorder Traversal\n");
    Postorder(root);
}

