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
    ListNode* swapPairs(ListNode* A) {
         ListNode* tmp = A;
    ListNode* prev = NULL;
        if(A==NULL)return A;
    if(A->next==NULL)return A;
    A = A->next;
    while(tmp!=NULL && tmp->next != NULL){
        ListNode* tmp2 = tmp->next;
       
        tmp->next = tmp2->next;
        tmp2->next = tmp;
         if(prev!=NULL){
            prev->next = tmp2;
        }
        prev = tmp;
        tmp = tmp->next;
        
    }
    return A;
    }
};