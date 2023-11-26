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
        
        if ((!head) || (!head->next) || (!head->next->next)) return; // Edge cases
        
        int size = 0;
        ListNode* prev = head;
        ListNode* prev2 = head;
        ListNode* curr = head;
        while(curr!=nullptr && curr->next!=nullptr){
            prev2=prev;
            prev = prev->next;
            curr= curr->next->next;
            size++;
        }
        curr = prev;
        // prev2->next = nullptr;
        
        stack<ListNode*> my_stack;
        while (curr != nullptr) // Put all nodes in stack
        {
            my_stack.push(curr);
            // cout<<curr->val<<endl;
            curr = curr->next;
        }
        
        ListNode* pptr = head;
        int n = my_stack.size();
        for (int j=0; j<n; j++) // Between every two nodes insert the one 
        {
            // cout<<pptr->val<<endl;
            ListNode* element = my_stack.top();
            my_stack.pop();
            element->next = pptr->next;
            pptr->next = element;
            pptr = pptr->next->next;
        }
        pptr->next = nullptr;
        
        
        
//         if(head == nullptr)return;
        
//         //find middle
//         ListNode* prev = head;
//         ListNode* curr = head;
//         while(curr!=nullptr && curr->next!=nullptr){
//             prev = prev->next;
//             curr= curr->next->next;
//         }
//         curr = prev->next;
//         prev->next = nullptr;
        
//         //reverse second half
//         prev = nullptr;
//         ListNode* tmp = nullptr;
//         while(curr!=nullptr){
//             tmp = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = tmp;
//         }
//         curr = prev;
        
//         //merge two lists
//         prev = head->next;
//         tmp = head;
//         bool even = false;
//         while(prev!=nullptr && curr!=nullptr){
//             if(even){
//                 tmp->next = prev;
//                 prev = prev->next;
               
//             }else{
//                 tmp->next = curr;
//                 curr= curr->next ;
//             }
//             tmp = tmp->next;
//             even = !even;
//         }
//         if(prev!=nullptr){
//             tmp->next = prev;
//         }
//         if(curr!=nullptr){
//             tmp->next = curr;
//         }
        
//         //return head
//         return;
    }
};