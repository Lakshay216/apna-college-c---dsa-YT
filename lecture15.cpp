// 238. Product of Array Except Self
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans (n,1);
        int suffix=1;
        //prefix => ans
        for(int i=1 ;i<n;i++){
            ans[i] = nums[i-1]*ans[i-1];
        }
        for(int i=n-2;i>=0;i--){
            suffix*= nums[i+1];
            ans[i] *= suffix;
        }
    return ans;
    }
};