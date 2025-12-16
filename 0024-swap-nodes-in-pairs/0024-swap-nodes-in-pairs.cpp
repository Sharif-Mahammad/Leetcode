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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
            ListNode *first=head;
            ListNode *second;
            while(first && first->next){
                second=first->next;
                int dummy=first->val;
                first->val=second->val;
                second->val=dummy;
                first=second->next;

            }
        return head;
    }
};