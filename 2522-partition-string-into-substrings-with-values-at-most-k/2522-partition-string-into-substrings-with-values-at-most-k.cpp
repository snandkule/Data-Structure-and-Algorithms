class Solution {
public:
    
    vector<long> arr;
    long getans(string& s, int k, int pos){
        
        if(arr[pos]!=s.length()+1){
            return arr[pos];
        }
        if(pos==s.length()-1){
            if(s[pos]-'0'<=k)
                return 1;
            return -1;
        }
        if(pos>=s.length())return 0;
        long tmp=INT_MAX;
        if(to_string(k).length()>=s.length()-pos){
             long int sub1 = stol(s.substr(pos));
            if(sub1<=k){
                tmp=1;
            }
        }
        for(int i=1; i<=to_string(k).length()&& pos+i<s.length();i++)
        {
            //take substr pos to i and i to remaining
            long sub1 = stol(s.substr(pos,i));
            if(sub1<=k){
                long nextans = getans(s,k,pos+i);
                if(nextans!=-1)
                    tmp = min(tmp, 1+nextans);
            }
            //check if minimum then it is the ans//assign in arr and return;
        }
        if(tmp==INT_MAX)tmp= -1;
        if(arr[pos]==s.length()+1){
            arr[pos] = tmp;
        }
        
        return tmp;
    }
    
    int minimumPartition(string s, int k) {
    arr.assign(s.length(),s.length()+1);
        
        return getans(s,k,0);
        
        
    }
};