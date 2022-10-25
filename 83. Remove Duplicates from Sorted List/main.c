/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode node;
struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head == NULL) return NULL;
    node *first, *current, *previous;
    bool flag = true;
    int tmp = 0;
    
    while(head != NULL){
        current = (node *)malloc(sizeof(node));
        current->next = NULL;
        
        if(flag){
            tmp = head->val;
            current->val = tmp;
            first = current;
            flag = false;
            previous = current;
        }
        else{
            if(tmp != head->val){
                tmp = head->val;
                current->val = tmp;
                previous->next = current;
                previous = current;
            }
        }
        
        head = head->next;
    }
    return first;
}