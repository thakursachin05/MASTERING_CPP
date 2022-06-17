// https://www.interviewbit.com/problems/sort-list/
// Sort the linked list


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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




ListNode* Solution::sortList(ListNode* A) {
    if(!A || !A->next) return A;
    ListNode* head = A;
    ListNode* slow = head;
    ListNode* fast = head->next;

    while(fast){
        fast = fast->next;
        if(fast){
            slow = slow->next;
            fast = fast->next;
        }
    }
    ListNode* left = head;
    ListNode* right = slow->next;
    slow->next = NULL;
     left = sortList(left);
     right = sortList(right);

     if(!left) return right;
     if(!right) return left;

     return mergeTwoLists(left,right);
}
