// https://leetcode.com/problems/remove-linked-list-elements/
// 203. Remove Linked List Elements

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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr){
            if(curr->val == val){
                if(prev){
                    prev->next = curr->next;
                    curr->next = NULL;
            
                    if(prev == NULL){
                        return head;
                    }
                    curr = prev->next;
                }
                else{
                    head = head->next;
                    curr = curr->next;
                }
            }
            else{
                  prev = curr;
                    if(curr==NULL) return head;
                    curr = curr->next;
            }
          
        }
        return head;
    }
};



/* ------- Sigma Rule -----------
  If you can't find error in your code ,
  then there is error in your logic......
  ---------------- */