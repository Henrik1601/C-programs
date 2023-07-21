#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
 struct node
 {
     int data;
     struct node * left;
     struct node* right;
 }*root;

 void constructBST(int num)
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

 bool isValidBST(struct node* root)
 {
     long min=LONG_MIN;
     long max=LONG_MAX;
     if(valid(root,min,max))
     {
         return true;
     }
     else
     {
         return false;
     }
 }

 bool valid(struct node *root,long min,long max)
 {
     if(root==NULL) return true;
     int curr=root->val;
     if(curr <= min || curr >= max) return false;
     return valid(root->left,min,root->val) && valid(root->right,root->val,max);
 }

 int main()
 {
     int num;
     do
     {
         scanf("%d",&num);
         if(num>0)
         {
             constructBST(num);
         }
     }while(num>0);
     if(isValidBST(root))
     {
         printf("true");
     }
     else
     {
         printf("false");
     }
 }
