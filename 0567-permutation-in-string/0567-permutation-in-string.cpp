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
        for(int i=0;i<s1.length();i++)arr1[s1[i]-'a']++;
        
        int start =0,end = 0;
        
        while(end<s1.length()){
            arr2[s2[end]-'a']++;
            end++;
        }
        
        while(end<s2.length()){
            
            if(isvalid(arr1,arr2))return true;
            
            arr2[s2[start]-'a']--;
            arr2[s2[end]-'a']++;
            end++;
            start++;
        }
        
        if(isvalid(arr1,arr2))return true;
        
        return false;
        
        
        
        
    }
};