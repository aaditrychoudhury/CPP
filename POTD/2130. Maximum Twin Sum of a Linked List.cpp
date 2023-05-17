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
    int pairSum(ListNode* head) {
        if(!head || !head->next) return 0;
        int mx = INT_MIN;
        ListNode *front = head;
        // while(temp->next){
        //     ++n;
        //     temp = temp->next;
        // }
        // ListNode *rev = head, *prev = nullptr;
        // for(int i =0;i<n/2;++i){
        //     prev = rev;
        //     rev= rev->next;
        // }
        ListNode *slow=head,*fast=head,*prev=nullptr;
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast = fast->next->next;
        }
        //reverse the nodes
        ListNode *newR = NULL;
        while(slow){
            ListNode *next = slow->next;
            slow->next = newR;
            newR = slow;
            slow = next;
        }
        prev->next = newR;
        while(front!=newR && newR){
            int sum = front->val + newR->val;
            mx = max(mx,sum);
            front= front->next;
            newR = newR->next;
        }
        return mx;
    }
};
