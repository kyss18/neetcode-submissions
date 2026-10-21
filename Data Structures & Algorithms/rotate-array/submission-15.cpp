class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int right=k%nums.size();
        if (right >0){
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+right);
        reverse(nums.begin()+right,nums.end());
    }
        for (int x :nums){
        cout<<x<<" ";
    }
    }
};