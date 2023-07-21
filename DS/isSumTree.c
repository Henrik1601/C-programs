#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

bool isSumTree(struct TreeNode* root) {
    if (root == NULL) {
        return true;
    }

    if (root->left == NULL && root->right == NULL) {
        return true;
    }

    if (isSumTree(root->left) && isSumTree(root->right)) {
        int left_sum = root->left == NULL ? 0 : root->left->val;
        int right_sum = root->right == NULL ? 0 : root->right->val;

        return root->val == left_sum + right_sum;
    }

    return false;
}

struct TreeNode* newNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int main() {
    struct TreeNode* root = newNode(26);
    root->left = newNode(10);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(6);
    root->right->right = newNode(3);

    if (isSumTree(root)) {
        printf("The tree is a SumTree\n");
    } else {
        printf("The tree is not a SumTree\n");
    }

    return 0;
}

