/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy=new ListNode(-1);
        ListNode* ans=dummy;
        ListNode* curr=head->next;
        int sum=0;
        while(curr!=NULL){
        
        if(curr->val!=0){
            while(curr->val!=0){
                sum+=curr->val;
                curr=curr->next;
            }
        }
        ans->next=new ListNode(sum);
        sum=0;
        ans=ans->next;
        curr=curr->next;
        }
        return dummy->next;
    }
};