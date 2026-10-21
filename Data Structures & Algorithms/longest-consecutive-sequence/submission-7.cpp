class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=0;
        int current=0;
        unordered_set <int> s;
        for (int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        if (s.size()==1)
            return 1;
        for (auto x:s){
            if (s.find(x-1)== s.end() && s.find(x+1)!= s.end() ){
                //cout<<x<<" ";
                int start=x;
                current=1;
                while(s.find(start+1)!=s.end()){
                    start++;
                    current++;
                }
            }
            if (longest<current){
                longest=current;
            }
        }
        return longest;
    }
};
