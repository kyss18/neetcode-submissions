public class Solution {
    public int SearchInsert(int[] nums, int target) {
        int size= nums.Length;
        int left=0;
        int right=size-1;
        int mid=-1;
        while (left<=right){
            mid=(left+right)/2;
            if (nums[mid]== target){
                return mid;
            }
            else if (nums[mid]< target){
                left=mid+1;
            }
            else {
                right= mid -1;
            }
        }
        if (nums[mid]<target){
            return mid+1;
        }
        return mid;
    }
}