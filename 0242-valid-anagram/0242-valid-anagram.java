class Solution {
    public boolean isAnagram(String s, String t) {
//         int[] arrs = new int[26];
//         int[] arrt = new int[26];
//         if(s.length()!=t.length())return false;

//         for(int i=0;i<s.length();i++){
//             arrs[s.charAt(i)-'a']++;
//             arrt[t.charAt(i)-'a']++;
//         }
//         for(int i=0;i<26;i++){
//             if(arrs[i]!=arrt[i])return false;
//         }
//         return true;
        
        
        char[] sChars = s.toCharArray();
        char[] tChars = t.toCharArray();
        
        Arrays.sort(sChars);
        Arrays.sort(tChars);
        
        return Arrays.equals(sChars, tChars);


    }
}