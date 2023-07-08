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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr ||k<=0)return head;
        
        int n=0;
        
        ListNode* tmp = head;
        
        while(tmp!=nullptr){
            n++;
            tmp = tmp->next;
        }
        
        k = k%n;
        if(n<=1 ||  k==0)return head;
        n = n-k;
        tmp = head;
        while(n>1){
            tmp = tmp->next;
            n--;
        }
        ListNode* ans = tmp->next;
        tmp->next = nullptr;
        
        tmp = ans;
        while(tmp->next!=nullptr)tmp = tmp->next;
        tmp->next = head;
        return ans;
    
    }
};