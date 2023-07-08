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
    bool isPalindrome(ListNode* head) {
        
        ListNode* slow = head;
        ListNode* fast = head;
        stack<int> s1;
        while(fast!=nullptr && fast->next!=nullptr){
            s1.push(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if(fast!=nullptr)slow = slow->next;
        
        
        while(slow!=nullptr){
            if(slow->val!=s1.top())return false;
            slow=slow->next;
            s1.pop();
        }
        return true;
        
        
        
        
        
    }
};