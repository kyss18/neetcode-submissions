class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        auto left=0;
       
        auto right=numbers.size()-1;
        while( left<right){
            if(numbers[left]+numbers[right]== target){
                
               return {left+1,right+1};
                
                
            }
            else if (numbers[left]+numbers[right]> target) 
                right--;
            else 
                left++;
        }
    
    }
};
