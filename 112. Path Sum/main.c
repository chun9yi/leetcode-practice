/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool check(struct TreeNode* root, int target){
    if(root == NULL) return false;
    
    int tmp = root->val;
    if(root->left == NULL && root->right == NULL && (target-tmp) ==0) return true;
    
    bool flag = check(root->left, target-tmp);
    if(flag == true) return true;
    flag = check(root->right, target-tmp);
    return flag;
}

bool hasPathSum(struct TreeNode* root, int targetSum){
    if(root == NULL) return false;
    return check(root, targetSum);
}