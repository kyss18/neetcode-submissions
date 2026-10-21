class Solution {
public:
   bool check_map(map<int,int>& mp,int value){
        auto it=mp.find(value);
        if(it!= mp.end())
            return true;
        return false;
   }
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int> mp;
        int temp;
        for (int i=0;i< nums.size();i++){
             temp=target-nums[i];
            if (check_map(mp,temp)){
                return {mp[temp],i};
            }
            else {
                mp[nums[i]]=i;
            }
        }

    }
};
