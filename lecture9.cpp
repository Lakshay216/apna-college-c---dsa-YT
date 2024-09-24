//  2 sum leetcode question 1
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
  }
};

//  single num leet code question 136

#include <vector>
using namespace std;
class Solution {
public:
    vector<int> nums={2,2,1};
    int ans =0;
    int singleNumber(vector<int>& nums) {
        for(int val: nums){
            ans ^=val;
        }
     return ans;
    }
};