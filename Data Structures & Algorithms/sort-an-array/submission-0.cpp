class Solution {
public:
void merge(vector<int>& a,int left,int mid,int right){
    vector<int>temp;
    int i=left;
    int j=mid+1;
    while(i<=mid && j<=right){
        if (a[i]>a[j]){
            temp.push_back(a[j]);
            j++;
        }
        else {
            temp.push_back(a[i]);
            i++;
        }
    }
    while (i<=mid){
        temp.push_back(a[i]);
        i++;
    }
    while (j<=right){
        temp.push_back(a[j]);
        j++;
    }
    for (int k=0;k<temp.size();k++){
        a[left+k]=temp[k];
    }
}
     void merge_sort(vector<int>& nums,int left,int right){
        int mid=(left+right)/2;
        if (left>=right)
            return;
        merge_sort(nums,left,mid);
        merge_sort(nums,mid+1,right);
        merge(nums,left,mid,right);
    }
    vector<int> sortArray(vector<int>& nums) {
       // vector<int> temp;
        int left=0;
        int right=nums.size()-1;
        merge_sort(nums,left,right);
        return nums;

    }
};