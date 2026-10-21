class Solution {
public:
bool check_anagram(map<char,int>& mp, char c){
        auto it=mp.find(c);
        if (it != mp.end())
            return true;
        return false;
    }
    bool isAnagram(string s, string t) {
        map <char, int> mp;
        for (auto x:s){
            mp[x]++;
        }
        for (auto x:t){
            if (check_anagram(mp,x)){
                mp[x]--;
                if (mp[x]==0){
                    mp.erase(x);
                }
            }
            else {
                mp[x]++;
            }
        }
        if(mp.size()==0){
            return true;
        }
        return false;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector <vector<string>> v;
        int t=0;
        vector<bool> visited(strs.size(), false);
        for (int i=0;i<strs.size();i++){
            if (visited[i]== false){
                v.push_back({strs[i]});
                visited[i]=true;
                for (int j=i+1;j<strs.size();j++){
                    if(isAnagram(v[t][0],strs[j])==true && visited[j]==false){
                        v[t].push_back(strs[j]);
                        visited[j]=true;
                    }
                }
                t++;
            }
        }
        return v;}
    
};
