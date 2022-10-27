/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int depth(struct TreeNode* root){
    if(root == NULL) return 0;
    int maxNum = depth(root->left);
    int tmp = depth(root->right);
    maxNum = maxNum >= tmp ? maxNum:tmp;
    
    return maxNum+1;
}

int maxDepth(struct TreeNode* root){
    return depth(root);
}