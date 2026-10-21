class Solution {
public:
int partition (vector <int> &nums,int left,int right){
    int i=left-1;
    for (int j=left;j<right;j++){
        if (nums[j]<nums[right]){
            swap(nums[++i],nums[j]);
        }
    }
    swap(nums[++i],nums[right]);
    return i;
    
}
void quick_sort(vector <int> &nums,int left,int right){
    if (left >=right){
        return ;
    }
   int middle= partition(nums,left,right);
   cout <<left<<" "<< middle << " " << right << endl;
    quick_sort(nums,left,middle-1);
    quick_sort(nums,middle+1,right);

}
    vector<int> sortArray(vector<int>& nums) {
        int left=0,right=nums.size()-1;
quick_sort(nums,left,right);
    
    return nums;
    }
    
};