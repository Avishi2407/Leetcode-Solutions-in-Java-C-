/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
       int x;
       ListNode* p = node->next;
       x=p->val;
       p->val=node->val;
       node->val=x;
       node->next=p->next;
       delete(p);
       
    }
};