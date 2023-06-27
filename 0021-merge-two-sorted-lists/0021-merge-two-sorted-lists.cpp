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
        
        ListNode* ans = list1;
        if(list1==NULL && list2==NULL)return list1;
        if(list1==NULL)return list2;
        if(list2==NULL)return list1;
        ListNode* prev = NULL;
        ListNode* curr = list1;
        ListNode* other = list2;
        if(list1->val>list2->val){
            ans = list2;
            curr = list2;
            other  = list1;
        }
        while(curr!=NULL && other !=NULL){
            
            
            if(curr->val<=other->val){
                prev = curr;
                curr = curr->next;
            }else{
            
                prev->next = other;
                ListNode* tmp = curr;
                curr = other;
                other = tmp;
                
                prev = curr;
                curr = curr->next;
            }
        }
        
        if(curr==NULL){
            prev->next = other;
        }
        
        return ans;
        
    }
};