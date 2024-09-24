// leetcode 11. Container With Most Water
class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0; int rp= height.size()-1;
        int water =0;
        while(lp<rp){
           int width = rp-lp;
           int ht= min(height[rp],height[lp]);
           int area = ht*width;
            water=max(water,area);
            height[lp]<height[rp] ? lp++ : rp--;
        }
        return water;
    }
};