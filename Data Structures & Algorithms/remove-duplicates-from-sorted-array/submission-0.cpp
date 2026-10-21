class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int left=0;
    int right= left+1;
    while (left<=right &&right<a.size()){
        if (a[left]==a[right]){
            a.erase(a.begin()+left);
        }
        else{
           left++;
           right++;
        }
    }
    return a.size();

    }
};