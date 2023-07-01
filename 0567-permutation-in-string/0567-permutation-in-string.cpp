class Solution {
public:
    bool isvalid(int arr1[], int arr2[]){
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i])return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        
        if(s2.length()<s1.length())return false;
        
        int arr1[26]={0};
        int arr2[26]={0};
        for(int i=0;i<s1.length();i++){
            arr1[s1[i]-'a']++;
            arr2[s2[i]-'a']++;
        }
        
        int start =0,end = s1.length();
        int cnt=0;
        for(int i=0;i<26;i++){
            if(arr1[i]==arr2[i])cnt++;
        }
        while(end<s2.length()){
            
            if(cnt==26)return true;
            
            arr2[s2[start]-'a']--;
           
            if(arr1[s2[start]-'a']==arr2[s2[start]-'a'])cnt++;
            else if(arr1[s2[start]-'a']==arr2[s2[start]-'a']+1){
                cnt--;
            }
            arr2[s2[end]-'a']++;
            if(arr1[s2[end]-'a']==arr2[s2[end]-'a'])cnt++;
            else if(arr1[s2[end]-'a']==arr2[s2[end]-'a']-1)cnt--;
            end++;
            start++;
        }
        
        if(cnt==26)return true;
        
        return false;
        
        
        
        
    }
};