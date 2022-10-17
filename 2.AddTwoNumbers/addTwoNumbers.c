/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode node;
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    node *first, *current, *previous;
    bool flag = true;
    
    int cnt = 0;
    while(l1!=0 || l2!=0 || cnt!=0){
        current = (node *)malloc(sizeof(node));
        current->val = 0;
        current->next = NULL;     
        
        if(l1){
            cnt += l1->val;
        }
        if(l2){
            cnt += l2->val;
        }
        
        current->val = (cnt%10);
        cnt = (cnt/10);
        
        if(flag==true){
            first = current;
            flag=false;
        }
        else{
            previous->next = current;
        }
        
        current->next = NULL;
        previous = current;
        l1 = l1 ? l1->next : 0;
        l2 = l2 ? l2->next : 0;
    }
    
    return first;
}