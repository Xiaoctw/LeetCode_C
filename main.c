#include <stdio.h>

struct TreeNode;

int main() {
    printf("Hello, World!\n");
    return 0;
}

struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

/**
 * 获取二叉树的最大深度
 * @param root
 * @return
 */
int maxDepth(struct TreeNode* root) {
    if (root==NULL){
        return 0;
    }
    int left=maxDepth(root->left);
    int right=maxDepth(root->right);
    if (left>right){
        return left+1;
    }
    return right+1;
}