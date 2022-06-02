// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/submissions/
// 1290. Convert Binary Number in a Linked List to Integer


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
    int length(ListNode* head){
        int length = 0;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            length++;
        }
        return length;
    }
    int getDecimalValue(ListNode* head) {
        int index = length(head);

        long long number = 0;
        ListNode* temp = head;
        while(index--){
            if(temp->val==1){
                number += 1<<index;
               
            }
           
            temp = temp->next;
        }
        return number;
    }
};

/* ------- Sigma Rule -----------
  If you can't find error in your code ,
  then there is error in your logic......
  ---------------- */