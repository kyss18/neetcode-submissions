class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for (int i=0;i<k;i++){
            reverse(nums.begin(),nums.end());
            reverse(nums.begin()+1,nums.end());
        }
        for (int x:nums){
            cout<<x<<" ";
        }
    }
};