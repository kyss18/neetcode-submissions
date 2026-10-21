class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int l=0,r=0,sum=0,min=Integer.MAX_VALUE;
        int time=0;
        for (;r<nums.length;r++){
            sum+=nums[r];
            while (sum>=target){
                time++;
                int leng=r-l+1;
                if (min>leng){
                    min=leng;
                }
                sum-=nums[l++];
            }
        }
        if (time ==0){
            min=0;
        }
        return min;
    }
}