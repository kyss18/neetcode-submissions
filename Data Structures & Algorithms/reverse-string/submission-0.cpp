class Solution {
public:
    void processing(vector<char> &s,int left,int right){
        while (left < right){
            if (s[left]!= s[right])
                swap(s[left],s[right]);
            left++;
            right--;
        }
        for (auto x:s){
            cout<<x;
        }
    }
    void reverseString(vector<char>& s) {
        int left=0,right=s.size()-1;
        processing(s,left,right);

    }
};