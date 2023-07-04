/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(head==nullptr)return nullptr;
        
        map<int,Node*> m1;
        map<Node*,int> m2;
        Node* h2=new Node(head->val);
        Node* tmp_h2=h2;
        int i=1;
        m1[0]=h2;
        m2[head]=0;
        Node* tmp_h1 = head;
        tmp_h1 = tmp_h1->next;
        
        while(tmp_h1 !=nullptr){
            
            Node* n = new Node(tmp_h1->val);
            tmp_h2->next = n;
            tmp_h2 = n;
            
            m1[i]=n;
            m2[tmp_h1]=i;
            tmp_h1 = tmp_h1->next; 
            i++;
        }
        
        tmp_h2 = h2;
        tmp_h1 = head;
         while(tmp_h1 !=nullptr){
             if(tmp_h1->random==nullptr)
             tmp_h2->random = nullptr;
             else{
                 cout<<m2[tmp_h1->random]<<endl;
                 tmp_h2->random = m1[m2[tmp_h1->random]];
             }
             tmp_h1 = tmp_h1->next;
             tmp_h2 = tmp_h2->next;
         }
        return h2;
        
    }
};