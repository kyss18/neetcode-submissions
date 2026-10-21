class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> v;
        for (auto x:nums){
            v.push_back(x);
        }
        v.insert(v.end(),nums.begin(),nums.end());
        return v;
    }
};