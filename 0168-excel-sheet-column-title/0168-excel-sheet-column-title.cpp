class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        // if(columnNumber==1)return "A";
        while(columnNumber >0){

            int rem = (columnNumber-1)%26;
            cout<<rem<<endl;
            ans.push_back('A'+(rem));
            columnNumber = (columnNumber-1)/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};