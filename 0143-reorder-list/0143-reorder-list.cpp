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
        
        ListNode* last = head;
        int nodes=1;
        
        while(last->next!=nullptr){
            last = last->next;
            nodes++;
        }
        if(nodes<=2)return ;
        ListNode* sec_head = head; 
        ListNode* prev = nullptr;
        for(int i=0;i<nodes/2;i++){
            prev = sec_head;
            sec_head = sec_head->next;
        }
        
        prev->next = nullptr;
        
        prev = nullptr;
        while(sec_head!=nullptr){
            
            ListNode* tmp = sec_head->next;
            sec_head->next = prev;
            prev = sec_head;
            sec_head = tmp;
        }
        
        sec_head = prev;
        
        ListNode* ans = head;
         ListNode* prev2= nullptr;
        prev = nullptr;
        while(head!=nullptr && sec_head!=nullptr){
            cout<<head->val<<endl;
            cout<<sec_head->val<<endl;
            cout<<"----------------"<<endl;
            ListNode* tmp1 = head->next;
            head->next = sec_head;
            ListNode* tmp2 = sec_head->next;
            prev = head;
            prev2 = sec_head;
            sec_head->next = tmp1;
            head = tmp1;
            sec_head = tmp2;
        }
        if(sec_head!=nullptr){
            // cout<<sec_head->val<<endl;
            //     cout<<"asdsa ="<<prev->val<<endl;
            prev2->next = sec_head;
        }
        head = ans;
        
        
    }
};