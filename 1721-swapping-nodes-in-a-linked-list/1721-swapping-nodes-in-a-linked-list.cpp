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
    ListNode* swapNodes(ListNode* head, int k) {
        int c=0,x;
        ListNode* temp=head;
        ListNode* temp1=head;
        ListNode* temp2=head;
        while(temp!=NULL)
        {
            c++;
            if(c==k)
            {
                x=temp->val;
            }
            temp=temp->next;
        }
        int n=c-k+1;
        
        for(int i=1; i<n; i++)
        {
            temp1=temp1->next;
        }
        int y=temp1->val;
        temp1->val=x;
         
        for(int i=1; i<k; i++)
        {
            temp2=temp2->next;
        }
        temp2->val=y;
        
        return head;
    }
};