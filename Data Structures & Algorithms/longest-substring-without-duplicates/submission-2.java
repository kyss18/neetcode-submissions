class Solution {
    public int lengthOfLongestSubstring(String s) {
        Set<Character> set= new HashSet<>();
        int l=0,max=0,r=0;
        for (;r<s.length();r++){
            if (set.contains(s.charAt(r))){
                int leng=set.size();
                if(max<leng){
                    max=leng;
                }
                while(set.contains(s.charAt(r))){
                    set.remove(s.charAt(l++));
                }
            }
            set.add(s.charAt(r));
        }
        if (max<set.size()){
            max=set.size();
        }
        return max;
    }
}
