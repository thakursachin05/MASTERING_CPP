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
    ListNode* mergeTwoList(ListNode* A,ListNode* B){
        if(!A) return B;
        if(!B) return A;
        ListNode* C = NULL;
        
        if(A->val < B->val){
            C= A;
            C->next = mergeTwoList(A->next,B);
        }
        else {
            C = B;
            C->next = mergeTwoList(A,B->next);
        }
        
        return C;
    }
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        int n = arr.size();
        if(n==0) return NULL;
        ListNode* f = arr[0];

        for(int i=1;i<n;i++){
            f = mergeTwoList(f,arr[i]);
            
        }
        return f;
        
        
    }
};