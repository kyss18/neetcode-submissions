class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        vector<int> v;
        int right=numbers.size()-1;
        while( left<right){
            if(numbers[left]+numbers[right]== target){
                
                v.push_back(left+1);
                v.push_back(right+1);
                break;
                
            }
            else if (numbers[left]+numbers[right]> target) 
                right--;
            else 
                left++;
        }
        return v;
    }
};
