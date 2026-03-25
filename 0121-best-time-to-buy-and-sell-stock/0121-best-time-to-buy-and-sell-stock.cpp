class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = 0;                  // buy index
        int max = 1;                  // sell index
        int diff = 0;

        while(max < prices.size()) {  
            if(prices[max] - prices[min] > diff) {
                diff = prices[max] - prices[min];   
            }
            if(prices[max] < prices[min]) {
                min = max;   
            }
            max++;           
        }
        return diff;
    }
};
