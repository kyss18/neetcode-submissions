class Solution {
public:
    bool ispalirome(int left ,int right,string s)
    {
        while (left < right){
            if (s[left]==s[right])
            {
                left++;
                right--;
            }
            else 
                return false;
        }   
        return true;
    }
    bool validPalindrome(string s) {
        int left=0;
        int t=0;
        int right =s.size()-1;
        while(left <right){
            if (s[left]==s[right])
                {
                    left++;
                    right--;
                }
            else if (s[left]!= s[right]){
               return ispalirome(left,right-1,s)|| ispalirome(left+1,right,s);
            }
        }
        return true;
    }
};