#include <stdio.h>
#include <stdlib.h>


struct TreeNode;
#define N 40

#include <string.h>
int main() {
    printf("Hello, World!\n");
    int a=4;
    printf("整数值%d\n",a);
    printf("浮点数%10.2f\n",3.213);
    char str[N]="hhhhh";
    printf("%s",str);
    int A[N];
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

