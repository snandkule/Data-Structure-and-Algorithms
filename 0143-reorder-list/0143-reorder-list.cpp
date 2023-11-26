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
    void reorderList(ListNode* head) {
        if(head == nullptr)return;
        
        //find middle
        ListNode* prev = head;
        ListNode* curr = head;
        while(curr!=nullptr && curr->next!=nullptr){
            prev = prev->next;
            curr= curr->next->next;
        }
        curr = prev->next;
        prev->next = nullptr;
        
        //reverse second half
        prev = nullptr;
        ListNode* tmp = nullptr;
        while(curr!=nullptr){
            tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }
        curr = prev;
        
        //merge two lists
        prev = head->next;
        tmp = head;
        bool even = false;
        while(prev!=nullptr && curr!=nullptr){
            if(even){
                tmp->next = prev;
                prev = prev->next;
               
            }else{
                tmp->next = curr;
                curr= curr->next ;
            }
            tmp = tmp->next;
            even = !even;
        }
        if(prev!=nullptr){
            tmp->next = prev;
        }
        if(curr!=nullptr){
            tmp->next = curr;
        }
        
        //return head
        return;
    }
};