// maximum subarray leetcode 53
#include <vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum =0; int maxSum = INT_MIN;
        for(int val : nums){
            currSum += val;
            maxSum = max(currSum,maxSum);
            if(currSum<0){
                currSum=0;
            }
        }
        return maxSum;
    }
};

//  bruteforce maximum subarray
//  #include<iostream>
// using namespace std;


// int main()
// {
   
//     int arr[] ={1,2,-5,0,-12,-10,8};
//     int n = sizeof(arr)/sizeof(int);
//      int maxsum = INT_MIN;
//     for(int st=0;st<n;st++){
//         int currsum =0;
//         for(int end =st; end<n;end++){
//             currsum+= arr[end];
//             maxsum =max(maxsum,currsum);
//         }
//     }
//     cout<<maxsum<<endl;;

//    return 0; 
// }
