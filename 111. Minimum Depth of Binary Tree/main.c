/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int cnt(struct TreeNode* root){
    if(root == NULL) return 0;
    int left = cnt(root->left);
    int right = cnt(root->right);
    if(left == 0) return right+1;
    if(right == 0) return left+1;
    return left>right?right+1:left+1;
}

int minDepth(struct TreeNode* root){
    return cnt(root);
}