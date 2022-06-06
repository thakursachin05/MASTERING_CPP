// https://leetcode.com/problems/merge-two-sorted-lists/
// Merge Two Sorted Lists

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* i = list1;
        ListNode* j = list2;
        ListNode* temp = new ListNode(-1);
        ListNode* k = temp;
        
        while(i!=nullptr && j!=nullptr){
            if(i->val >= j->val){
                k->next = j;
                j = j->next;
            }
            else{
                k->next = i;
                i = i->next;
            }
               k = k->next;
        }
        if(i!=nullptr){
            k->next = i;
        }
        if(j!=nullptr){
            k->next = j;
        }
        return temp->next;
    }
};
