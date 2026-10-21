class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string temp=strs[0];
    for (int i=1;i<strs.size();i++){
        for (int j=0;j<temp.size();j++){
            if (temp[j]!=strs[i][j]){
                temp.erase(j);
            }
        }
    }
    return temp;
    }
};