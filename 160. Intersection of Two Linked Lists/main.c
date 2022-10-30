/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

typedef struct ListNode node;
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    node *a, *b;
    a = headA;
    b = headB;
    
    // no intersection: a=b=NULL
    while(a!=b){
        a = (a == NULL) ? headB : a->next;
        b = (b == NULL) ? headA : b->next;
    }
    
    return a;
}