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
void preorderBT(struct TreeNode* root, int* ans, int* returnSize){
    if(root==NULL) return 0;
    
    ans[(*returnSize)++] = root->val;
    preorderBT(root->left, ans, returnSize);
    preorderBT(root->right, ans, returnSize);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize){
    int *ans = (int *)malloc(sizeof(int)*100);
    *returnSize = 0;
    preorderBT(root, ans, returnSize);
    return ans;
}