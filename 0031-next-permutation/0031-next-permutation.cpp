class Solution {
public:
    void nextPermutation(vector<int>& A) {
        
         vector<int> digs;
    
    int pos = -1;
    int val = -1;
    for(int i = A.size()-1;i>0;i--)
    {
        int cur = A[i] ;
        int prev = A[i-1];
        if(prev>=cur){
            digs.push_back(cur);
        }else{
            digs.push_back(cur);
            digs.push_back(prev);
            pos = i;
            val = prev;
            break;
        }
    }
    
    if(pos==-1){
        sort(A.begin(),A.end());return;
    }
    
    sort(digs.begin(),digs.end());

     auto it = find(digs.begin(), digs.end(), val);

        // calculating the index
        // of K
    int index = it - digs.begin();
    index++;
    while(digs[index]==val)index++;
    for(int l=0;l<digs.size();l++)
    
    A[pos-1] =  digs[index];

    int i=0;
    for(int j =pos; j<A.size(); j++){
        if(i==index)i++;
        A[j] =digs[i];
        i++;
    }
    
        
    }
};