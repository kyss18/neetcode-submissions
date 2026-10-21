class Solution {
public:
    string convert_lower(string s){
        string result;
        for (char c:s){
            if (c>='A'&& c<='Z'){
            
                    result+=c+32;
                }
            else if (c>='a'&& c<='z'||c>='0' &&c<='9'){
                result+=c;
            }
    }
    return result;
    }
    bool processing(string lowercase,int left,int right){
        if (left > right){
            return true;
        }
        else if (lowercase[left]!= lowercase [right]){
                cout<<right;
            return false;
        }
        
        else {
            return processing(lowercase,left+1,right -1);
        }

    }
    bool isPalindrome(string s) {
        string lowercase=convert_lower(s);
        int left=0;
        int right=lowercase.size()-1;
        
        return processing(lowercase,left,right);
    }
};
