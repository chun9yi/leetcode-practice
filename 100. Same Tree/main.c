/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool check(struct TreeNode* p, struct TreeNode* q){
    if(p == NULL && q == NULL) return true;
    else if(p == NULL && q != NULL) return false;
    else if(p != NULL && q == NULL) return false;
    else{
        int tmp1 = p->val == q->val ? true:false;
        int tmp2 = check(p->left, q->left);
        int tmp3 = check(p->right, q->right);
        
        if(tmp1 && tmp2 && tmp3) return true;
        else return false;
    }
}

bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    bool ans = check(p, q);
    return ans;
}