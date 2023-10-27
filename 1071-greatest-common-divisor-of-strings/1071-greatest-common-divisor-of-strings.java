class Solution {
    public String gcdOfStrings(String str1, String str2) {
        if(str1.length()<str2.length()){
            String tmp = str2;
            str2 = str1;
            str1 = tmp;
        }
        int m = str1.length(),n = str2.length(), tmp=n;
        while(tmp>0 && !(m%tmp==0 && n%tmp==0)){
            tmp=tmp-1;
        }
        System.out.println("tmp=" + tmp);
        StringBuilder ans = new StringBuilder();
        if(tmp==0)return ans.toString();
        
        String subs = str2.substring(0,tmp);
         System.out.println("subs=" + subs);
        while(ans.length()<str1.length()){
            ans.append(subs);
        }
         System.out.println("ans updated=" + ans);
        if(!ans.toString().equals(str1))return "";
        
        ans.setLength(0);
         while(ans.length()<str2.length()){
            ans.append(subs);
        }
         System.out.println("ans updated 2=" + ans);
        if(!ans.toString().equals(str2))return "";
        return subs;          
    }
}