class Solution {
public:
    string convert_string(vector <int> count){
        string c;
        for (int i=0;i<count.size();i++){
            c+=to_string(count[i])+',';
        }
        return c;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        unordered_map<string,vector<string>> mp;
        for (int i=0;i<strs.size();i++){
            vector <int> count(26,0);
            for (auto x:strs[i]){
                count[x-'a']++;
            }
            string c=convert_string(count);
            mp[c].push_back(strs[i]);
        }
        for (auto it:mp)
            v.push_back(it.second);
        return v;
    }
};
