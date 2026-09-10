// 2265. Count Nodes Equal to Average of Subtree

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

#include <stdio.h>

int dfs(struct TreeNode* root, int* ans, int* count){
    if (root == NULL){
        *count = 0;
        return 0;
    }

    int leftCount, rightCount;

    int leftSum = dfs(root->left, ans, &leftCount);
    int rightSum = dfs(root->right, ans, &rightCount);

    int sum = root->val + leftSum + rightSum;
    *count = 1 + leftCount + rightCount;

    if (root->val == sum / (*count)){
        (*ans)++;
    }

    return sum;
}

int averageOfSubtree(struct TreeNode* root){
    int ans = 0;
    int count;
    dfs(root, &ans, &count);
    return ans;
}