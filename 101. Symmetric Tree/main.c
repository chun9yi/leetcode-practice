/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool check(struct TreeNode* l, struct TreeNode* r){
    if(l == NULL && r == NULL) return true;
    if(l == NULL || r == NULL) return false;
    
    if(l->val != r->val) return false;
    return check(l->left, r->right) && check(l->right, r->left);
    
}

bool isSymmetric(struct TreeNode* root){
    if(root == NULL) return true;
    return check(root->left, root->right);
}