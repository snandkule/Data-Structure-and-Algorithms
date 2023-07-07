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
    bool hasCycle(ListNode *head) {
        if(head==nullptr)return false;
        ListNode* fast = head->next;
        
        while(fast!=nullptr && fast->next!=nullptr){
            if(head==fast)return true;
            head = head->next;
            fast = fast->next->next;
        }
        return false;
        
    }
};