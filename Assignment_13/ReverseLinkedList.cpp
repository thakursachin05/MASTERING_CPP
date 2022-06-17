// https://leetcode.com/problems/reverse-linked-list/
// Reverse Linked List

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
    pair<ListNode*,ListNode*> reverse(ListNode* head,ListNode* end){
        
        if(head==nullptr || head->next==nullptr){
            return {head,head};
        }
        ListNode* temp = head;
        pair<ListNode*,ListNode*> rev = reverse(temp->next);
        
        ListNode* tail = rev.second;
        tail->next = head;
        head->next = nullptr;
        return { rev.first,head};
        
    }
    ListNode* reverseList(ListNode* head) {
        pair<ListNode*,ListNode*> ans = reverse(head);
        return ans.first;
    }
};
