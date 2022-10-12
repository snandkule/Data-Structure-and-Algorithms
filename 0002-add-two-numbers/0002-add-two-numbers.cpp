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
        
        ListNode* res;
        ListNode* head;
        int carry = 0;
        bool start = true;
        while(l1!=nullptr && l2 != nullptr)
        {
            
            ListNode* tmp = new ListNode();
            tmp->val = (l1->val + l2->val + carry)% 10;
            
            carry = (l1->val + l2->val + carry)/ 10;
            
            if(start){
                res = tmp;
                start = false;
                head = tmp;
            }else{
                head->next = tmp;
            head = head->next;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while(l1!=nullptr)
        {
             ListNode* tmp = new ListNode();
            tmp->val = (l1->val +  carry)% 10;
            
            carry = (l1->val + carry)/ 10;
            
            head->next = tmp;
            head = head->next;
            l1 = l1->next;
        }
        while(l2!=nullptr)
        {
            ListNode* tmp = new ListNode();
            tmp->val = (l2->val +  carry)% 10;
            
            carry = (l2->val + carry)/ 10;
            
            
            head->next = tmp;
            head = head->next;
            l2 = l2->next;
        }
        if(carry > 0 ){
            ListNode* tmp = new ListNode(carry);
             head->next = tmp;
        }
         
        return res;
        
        
        
        
    }
};