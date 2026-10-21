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
};
