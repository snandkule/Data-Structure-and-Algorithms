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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *fast = head, *slow = head;
        for (int i = 0; i < n; i++) fast = fast->next;
        if (!fast) return head->next;
        while (fast->next) fast = fast->next, slow = slow->next;
        slow->next = slow->next->next;
        return head;
//         ListNode* tmp =head;
//         int len = 0;
//         while(tmp!=nullptr){
//             len++;
//             tmp=tmp->next;
//         }
//         if(len==1)return nullptr;
//         if(len==n)return head->next;
//         ListNode* prev=nullptr;
//         len = len-n;
//         tmp = head;
//         for(int i=0;i<len;i++){
//             prev = tmp;
//             tmp=tmp->next;
//         }
        
//         prev->next = tmp->next;
//         return head;
        
    }
};