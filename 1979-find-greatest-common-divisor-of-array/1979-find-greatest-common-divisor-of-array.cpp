class Solution {
public:

    int getnextprime(int val){
        //  cout<<"---------gp--1------"<<val<<endl;
        while(1){
            // cout<<"---------gp--2------"<<val<<endl;
            bool isfound = true;
            for(int p=2; p*p<=val; p++){
                if(val%p==0){
                    val++;
                    isfound = false;
                    break;
                }
            }
            if(isfound)
                return val;
        }
        // cout<<"---------gp--3------"<<val<<endl;
        return val;
    }

    vector<int> getfactors(int num){

        vector<int> facts;
        int p = 2;
        //  cout<<"-----------------"<<num<<endl;
        while(num>1){
            cout<<num<<endl;
            if(num%p==0){
                facts.push_back(p);
                num = num/p;
            }else{
                p = getnextprime(p+1);
                while(p<=num && num%p!=0){
                    p = getnextprime(p+1);
                }
                facts.push_back(p);
                num = num/p;
            }
        }
        // cout<<"-----------------"<<num<<endl;
        return facts;
    }

    int findGCD(vector<int>& nums) {

        int minv=INT_MAX, maxv=INT_MIN;

        for(auto& num: nums){
            minv = min(num,minv);
            maxv = max(num,maxv);
        }

        // vector<int> facts1 = getfactors(minv);
        // vector<int> facts2 = getfactors(maxv);

        int i=0, j=0;
        long ans=1;

        for(int i =minv; i>=1; i--){
            if(maxv%i==0 && minv%i==0)return i;
        }

        // while(i<facts1.size() && j<facts2.size()){
        //     if(facts1[i]==facts2[j]){
        //         ans*=facts1[i];
        //         i++;j++;
        //     }else if(facts1[i]<facts2[j]){
        //         i++;
        //     }else if(facts1[i]>facts2[j]){
        //         j++;
        //     }
        // }
        return ans;

        
    }
};