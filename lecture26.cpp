//88. Merge Sorted Array
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx = m+n-1;
        int i=m-1;
        int j= n-1;
        while(i>=0&&j>=0){
            if(nums1[i]>nums2[j]){
                nums1[idx]=nums1[i];
                idx--;i--;
            }else{
                nums1[idx]=nums2[j];
                idx--;j--;
            }
        }
        while(j>=0){
            nums1[idx] =nums2[j];
             idx--;j--;
        }
    }
};
// 31. Next Permutation

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot =-1; int n = nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pivot =i;
                break;
            }
        }
        if(pivot==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]>nums[pivot]){
                swap(nums[i],nums[pivot]);
                break;
            }
        }
        int i = pivot+1, j=n-1;
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
};