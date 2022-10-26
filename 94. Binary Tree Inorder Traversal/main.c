/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
typedef struct TreeNode node;
void recursionBT(struct TreeNode* root, int *ans, int *size){
    if(root == NULL) return 0;
    recursionBT(root->left, ans, size);
    ans[(*size)++] = root->val;
    recursionBT(root->right, ans, size);   
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
    int *ans = (int *)malloc(sizeof(int)*100);
    *returnSize = 0;
    recursionBT(root, ans, returnSize);
    return ans;
}