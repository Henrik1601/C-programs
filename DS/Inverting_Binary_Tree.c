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
int depth(struct node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int leftdepth=depth(root->left);
    int rightdepth=depth(root->right);
    if(leftdepth>rightdepth){
        return (leftdepth+1);
    }
    else{
        return (rightdepth+1);
    }
}
void display(struct node*root,int index)
{
    if(root==NULL)
    {
        return;
    }
    if(index==1)
    {
        printf("%d ",root->data);
    }
    else if(index>1){
        display(root->left,index-1);
        display(root->right,index-1);
    }
}
void LevelOrder(struct node*root,int depth)
{
    for(int i=1;i<=depth;i++)
    {
        display(root,i);
    }
}
int main()
{
    struct node*root=create();
    int height=depth(root);
    printf("\nDepth: %d\n",height);
    LevelOrder(root,height);
}
