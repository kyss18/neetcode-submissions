class Solution {
public:
    string s;
    string mergeAlternately(string word1, string word2) {
        int left=0;
        int right=0;
        while (left < word1.size() && right<word2.size() ){
            s+=word1[left];
            s+=word2[right];
            left++;
            right++;
        }
        while (left < word1.size()){
            s+=word1[left];
            left++;
        }
        while (right<word2.size()){
            s+=word2[right];
            right++;
        }
        return s;
    }
};