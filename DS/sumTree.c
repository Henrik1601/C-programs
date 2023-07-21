#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
};
struct node* createTree()
{
    struct node*root=(struct node*)malloc(sizeof(struct node));
    int x;
    printf("\nEnter the value: ");
    scanf("%d",&x);
    if(x==0)
    {
        return NULL;
    }
    root->data=x;
    printf("\nEnter the value of left node of %d",x);
    root->left=createTree();
    printf("\nEnter the value of right node of %d",x);
    root->right=createTree();
    return root;
}
void display(struct node*root)
{
    if(root==NULL)
    {
        return;
    }
    display(root->left);
    printf("%d ",root->data);
    display(root->right);
}
bool sumTree(struct node*root)
{
    if (root == NULL) {
        return true;
    }

    if (root->left == NULL && root->right == NULL) {
        return true;
    }

    if (sumTree(root->left) && sumTree(root->right)) {
        int left_sum = root->left == NULL ? 0 : root->left->data;
        int right_sum = root->right == NULL ? 0 : root->right->data;

        return root->data == left_sum + right_sum;
    }

    return false;
}
int main()
{
    struct node*root;
    root=createTree();
    if(sumTree(root))
    {
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    display(root);
}
