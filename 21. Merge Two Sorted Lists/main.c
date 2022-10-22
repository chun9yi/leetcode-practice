/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode node;
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    node *ans, *tmp, *previous;
    bool flag = true;
    
    if(list1==NULL && list2==NULL) return 0;
    while(list1 != NULL || list2 != NULL){
        tmp = (node *)malloc(sizeof(node));
        tmp->val = 0;
        tmp->next = NULL;
        
        if(list1==NULL){
            tmp->val = list2->val;
            list2 = list2->next;
        }
        else if(list2==NULL){
            tmp->val = list1->val;
            list1 = list1->next;
        }
        else{
            if(list1->val <= list2->val){
                tmp->val = list1->val;
                list1 = list1->next;
            }
            else{
                tmp->val = list2->val;
                list2 = list2->next;
            } 
        }
        
        if(flag == true){
            ans = tmp;
            flag = false;
        }
        else{
            previous->next = tmp;
        }
        previous = tmp;
        
    }
    
    return ans;
}