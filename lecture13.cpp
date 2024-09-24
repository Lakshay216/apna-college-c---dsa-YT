// POW(x,n) leetcode 50
class Solution {
public:
    double myPow(double x, int n) {
        long binForm = n;
        if(n<0){
            x = 1/x;
            binForm = -binForm;
        }
        double ans = 1;

        while(binForm>0){
            if(binForm%2==1){
                ans *=x;
            }
            x *=x;
            binForm /=2;
        }
        return ans;
    }
};

// best time to buy and sell stock leetcode 121
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        int n = prices.size();
        for(int i=1;i<n;i++){
            if(prices[i]>buy){
                profit = max(profit,prices[i]-buy);
            }
            buy = min(buy,prices[i]);
        }
   return profit;
    }
};