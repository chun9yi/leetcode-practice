/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

typedef struct TreeNode node;
struct TreeNode* tree(int* nums, int start, int end){
    node *current = (node *)malloc(sizeof(node));
    current->left=NULL;
    current->right=NULL;
    
    if(start>end) return 0;
    
    int mid = (start+end)/2;
    current->left = tree(nums, start, mid-1);
    current->val = nums[mid];
    current->right = tree(nums, mid+1, end);
    return current;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
    return tree(nums, 0, numsSize-1);
}