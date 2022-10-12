class Solution {
public:

    int getDist(string a, string b){

        int m = a.length();
        int n = b.length();

        if(n>m){
            int tmp = m;
            m=n;
            n =tmp;
            string t = a;
            a =b;
            b = t;

        }
        int ans =0;

        for(int i=0;i<m;i++){

            if(i<n && a[i]!=b[i]){
                ans++;
            }else if(i>=n && a[i]=='1'){
                ans++;
            }
        }
        return ans;

    }

    string getbinary(int val){
        string bin;
        int A = val;
        if(val==0){
             while(bin.length()<32)bin.push_back('0');
            return bin;
        }
        while(A>1){
            if(A%2==0)bin.push_back('0');
            else bin.push_back('1');

            A = A/2;
        }
        if(A==1)bin.push_back('1');
        while(bin.length()<32)bin.push_back('0');
        return bin;
    }
    int totalHammingDistance(vector<int>& nums) {

        vector<string> bins;
        for(auto& val: nums){
            bins.push_back(getbinary(val));
        }
        long ans = 0;

        for(int i=0; i<32; i++){
            int set=0;
            for(int j=0;j<bins.size();j++){
                if(bins[j][i]=='1')set++;
            }
            ans += (set * (bins.size()-set));
          
        }
        return ans;

        
    }
};