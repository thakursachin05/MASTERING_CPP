// https://leetcode.com/problems/remove-duplicates-from-sorted-list/
// 83. Remove Duplicates from Sorted List

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* prev = head;
        ListNode* curr = head->next;
        
        while(curr && prev){
            if(prev->val == curr->val){
                prev->next = curr->next;
                curr->next = NULL;
                curr = prev->next;
            }
            else{
                prev = prev->next;
                curr = curr->next;
            }
        }
        return head;
    }
};


/* ------- Sigma Rules -----------
  If you can't find error in your code ,
  then there is error in your logic......

 Copy pasting Would not let you win in long RUN

  ---------------- */