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
void postorderBT(struct TreeNode* root, int* ans, int* size){
    if(root == NULL) return 0;
    
    postorderBT(root->left, ans, size);
    postorderBT(root->right, ans, size);
    ans[(*size)++] = root->val;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize){
    int *ans = (int *)malloc(sizeof(int)*100);
    
    *returnSize = 0;
    postorderBT(root, ans, returnSize);
    return ans;
}