class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxProfit = 0; 
        
        int left = 0, right = 1;

        while (right < prices.size())
        {
            if (prices[left] > prices[right])
            {
                left = right;
            }

            else
            {
                maxProfit = max(maxProfit, prices[right] - prices[left]);
            }
            right++;
        }
        return maxProfit;
    }
};