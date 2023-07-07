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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
       
       
        ListNode* curr=new ListNode((l1->val + l2->val)%10);
         ListNode* ans=curr;
         int carry= (l1->val + l2->val )/10;
       l1 = l1->next;
        l2 = l2->next;
        
        while(l1!=nullptr&&l2!=nullptr){
            
            ListNode* tmp = new ListNode((l1->val + l2->val + carry)%10);
            
            carry = (l1->val + l2->val + carry)/10;
            
            curr->next = tmp;
            curr= tmp;
            
            l1 = l1->next;
            l2 = l2->next;
        }
        if(l1==nullptr)l1=l2;
        while(l1!=nullptr){
            
            ListNode* tmp = new ListNode((l1->val + carry)%10);
            
            carry = (l1->val +carry)/10;
            
            if(curr==nullptr){
                ans = tmp;
                curr=tmp;
            }else{
                curr->next = tmp;
                curr= tmp;
            }
            l1 = l1->next;
        }
        
        
        if(carry>0){
            ListNode* tmp = new ListNode(carry);
            curr->next = tmp;
        }
        
        return ans;
        
        
        
    }
};