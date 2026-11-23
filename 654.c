// 654. Maximum Binary Tree

#include <stdio.h>
#include <stdlib.h>

struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* foo(int *nums, int l, int r){
    if (l > r){
        return NULL;
    }

    int max = l;
    for (int i = l + 1; i <= r; i++){
        if (nums[i] > nums[max]){
            max = i;
        }
    }

    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));

    root->val = nums[max];
    root->left = NULL;
    root->right = NULL;

    root->left = foo(nums, l, max - 1);
    root->right = foo(nums, max + 1, r);

    return root;
}

struct TreeNode* constructMaximumBinaryTree(int* nums, int numsSize) {
    return foo(nums, 0, numsSize - 1);
}