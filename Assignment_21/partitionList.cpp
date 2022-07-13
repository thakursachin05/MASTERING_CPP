// https://leetcode.com/problems/partition-list/
// LeetCode Problem Partition List

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
    ListNode* partition(ListNode* start, int x) {
        ListNode* shead = new ListNode(0);
        ListNode* Lhead = new ListNode(0);
        ListNode* s = shead;
        ListNode* h = Lhead;
        
        while(start!=NULL){
            if(start->val < x){
                s->next = start;
                s = s->next;
            }
            else{
                h->next = start;
                h = h->next;
            }
            start = start->next;
        }
        h->next = nullptr;
        
        s->next = Lhead->next;
        return shead->next;
        
    }
};