/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode node;
bool hasCycle(struct ListNode *head) {
    node *rabbit, *turtle;
    rabbit = head;
    turtle = head;
    
    while(rabbit != NULL && rabbit->next != NULL){
        turtle = turtle->next;
        rabbit = rabbit->next->next;
        
        if(turtle == rabbit){
            return true;
        }
    }
    
    return false;
}