class MinStack {
    vector<int> s;
    int m=-1;
public:
    MinStack() {
        vector<int> t(0);
        s = t;
    }
    
    void find_min(){
       
        m = -1;
        if(s.size()==0)return;
        m = 0;
        for(int i=1;i<s.size();i++){
            if(s[m]>s[i])m=i;
        }
        
    }
    
    void push(int val) {
        if(m==-1){
            m=0;
        }else if(s[m]>val) m = s.size();
        s.push_back(val);
    }
    
    void pop() {
        s.pop_back();
        
        if(m==s.size()){
            find_min();
        }
    }
    
    int top() {
        
        return s[s.size()-1];
    }
    
    int getMin() {
        return s[m];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */