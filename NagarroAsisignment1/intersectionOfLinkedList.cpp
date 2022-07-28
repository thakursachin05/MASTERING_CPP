/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    int length(ListNode* head){
        if(!head) return 0;
        int len = 0;
        ListNode* temp = head;
        while(temp){
            len++;
            temp = temp->next;
        }
        return len;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a = length(headA);
        int b = length(headB);
        // cout<<a<<" "<<b<<endl;
        
        while(a > b){
            headA = headA->next;
            a--;
        }
        cout<<headA->val<<endl;
        while(b>a){
            headB = headB->next;
            b--;
        }
        cout<<headB->val<<endl;
        
        while(headA!=NULL && headB!=nullptr){
            if(headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return nullptr;
    }
};