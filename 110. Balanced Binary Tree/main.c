/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int check(struct TreeNode *root){
    if(root == NULL) return 0;
    
    int left = check(root->left);
    if(left>=10000) return 10000;
    int right = check(root->right);
    if(right>=10000) return 10000;
    if(abs(left-right) > 1) return 10000;
    
    return left>right?left+1:right+1;
}

bool isBalanced(struct TreeNode* root){
    return check(root)>=10000?false:true;
}